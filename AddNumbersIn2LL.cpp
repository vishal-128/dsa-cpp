#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next ;

    Node(int data )
    {
        this -> data = data;
        this -> next = NULL;
    }

    // destructor
    ~Node(){
        int value = this-> data;
        // memory free
        if(this->next != NULL)
        {
            delete next;
            this -> next = NULL;
        }
        cout<< "memory is free for data : "<<value<<endl;
    }
};

void InsertAtHead( Node* &head , int d){

    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
    
}

void InsertAtTail(Node* &head, Node* &tail , int d){

     if(head == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
    }
}


void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<< temp -> data << ' ';
        temp = temp -> next;
    }
    cout<< endl;
}

Node* reverseNode(Node* &head ){

    if(head -> next == NULL){
        return head;
    }
    
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL ;

    while (curr != NULL){
    forward = curr -> next ; 
    curr -> next = prev ; 
    prev = curr;
    curr = forward;
    }
    head = prev ;
    return head;
}

Node* AddNumbers(Node* first, Node* second){
    int carry = 0;
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    while(first != NULL || second != NULL || carry != 0){

        int val1 = 0;
        if( first != NULL){
            val1 = first -> data;
        }
        int val2 = 0;
        if( second != NULL){
            val2 = second -> data;
        }

        int sum = carry + val1 + val2;
        carry = sum / 10 ;
        int digit = sum % 10 ;
        InsertAtTail(ansHead,ansTail,digit);

        if( first != NULL)
        first = first -> next ;

        if(second != NULL)
        second = second -> next ;
    }
    return ansHead;
}


Node* AddNumbersIn2List(Node* &head1, Node* head2){

    Node* temp1 = reverseNode(head1);
    Node* temp2 = reverseNode(head2);

    // step 2 - add numbers
   Node* ans = AddNumbers(temp1 , temp2);

   // step-3 -reverse and give ans
   ans = reverseNode(ans);
   return ans;

}



int main()
{
    // first node
    Node* node1 = new Node(3);
    Node* head = node1;
    Node* tail = node1;
    InsertAtTail(head,tail , 4);
    InsertAtTail(head,tail, 5);
    print(head); 

    Node* node2 = new Node(4);
    Node* head2 = node2;
    Node* tail2 = node2;

    InsertAtTail(head2,tail2, 5);
    print(head2);

    Node* Top = AddNumbersIn2List(head,head2);
    print(Top);
}