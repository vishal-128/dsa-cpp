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

void InsertAtHead(Node* &head , int d){

    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
    
}

void InsertAtTail(Node* &tail , int d){

    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void InsertAtPosition(Node* &tail , Node* &head, int position , int d){

    // inserting in position 1
    if( position <= 1){

        InsertAtHead(head , d);
        return; // we use this to end the function
    }

    Node* temp = head;
    int cnt = 1;
    while (cnt < position-1){

        temp = temp -> next ; 
        cnt++;
    }

     // inserting at last position
    if( temp -> next == NULL){
        InsertAtTail(tail , d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
    
}

void deleteNode(int position , Node* &head, Node* &tail){
    
    // when deleting first node
    if (position == 1){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        // free the memory
        delete temp;
    }

    // any middle or last node
    else{
        Node* current = head;
        Node* previous = NULL;
        int cnt =1;
        while(cnt < position){
            previous = current;
            current = current -> next;
            cnt++;
        }
        if(current -> next == NULL){
            tail = previous;
        }
        previous->next = current->next;
        current->next = NULL;
        delete current;
    }
}

void reverseNode(Node* &head ){
    
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
}

int middleElement(Node* head){
    
    Node* curr = head;
    int cnt = 1 ;
    while(curr->next != NULL){
        curr = curr -> next;
        cnt++;
    }
   
    curr = head;
    int copy = cnt ;
    int c = copy / 2 ;
    int i = 0;
    while( i < c){
        curr = curr -> next;
        i++;
    }
    return curr->data;
}

int middleElementOptimeze(Node* head){
    if(head == NULL){
        return 0;
    }
    else{
        Node* fast = head -> next ;
        Node* slow = head ;
        while (fast != NULL){
            fast = fast->next;
            slow = slow->next;
            if(fast == NULL){
            break;
            }
            fast = fast -> next;
        }
        return slow->data ;
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

int main()
{
    // first node
    Node* node1 = new Node(10);

    // defining node1 as head
    Node* head = node1;
    Node* tail = node1;

    // inserting a new node
    InsertAtTail(tail , 12);
    InsertAtTail(tail, 15);
    print(head);

    InsertAtPosition(tail , head , 4 , 20);
    InsertAtPosition(tail , head , 5 , 30);
    InsertAtPosition(tail , head , 3 , 40);
    
    
    
    print(head);

    cout<<"head : "<<head -> data << endl;
    cout<<"tail : "<<tail -> data <<endl;

   // deleteNode(4,head,tail);
  //  print(head);
    reverseNode(head) ;

    print(head);

    cout<< "middle element is : " << middleElement(head) << endl ;
    cout<< "middle element for optimize code is : " << middleElementOptimeze(head) << endl ;

}