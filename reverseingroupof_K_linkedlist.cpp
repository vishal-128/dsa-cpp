#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> next = NULL;
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
int length(Node* head){
    int cnt = 0;
    while(head != NULL){
        head = head-> next;
        cnt++;
    }
    return cnt;
}

void reverse (Node* head , Node* tail){
    Node *curr = head;
    Node* prev = NULL;
    Node* forward = NULL;
    while (curr != NULL){
        forward = curr->next;
        curr -> next = prev;
        prev = curr;
        curr = forward; 
    }
    
}

Node* reverseIngroupOfK(Node* head , int k){
    Node* curr = head;
    Node* prev = NULL;
    Node* forward = NULL;
    int len = length(head);
    int cnt = 0 ;
    while( curr != NULL && cnt < k){
        forward = curr -> next ;
        curr -> next = prev;
        prev = curr ; 
        curr = forward;
        cnt++;
    }
    if(forward != NULL){
    head -> next = reverseIngroupOfK(forward,k);
    }

   return prev;
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
    InsertAtPosition(tail ,head, 2, 12);
    InsertAtPosition(tail,head,3, 15);
    print(head);

    InsertAtPosition(tail , head , 4 , 20);
    InsertAtPosition(tail , head , 5 , 30);
    InsertAtPosition(tail , head , 3 , 40);
    
    
    
    print(head);

/*  cout<<"head : "<<head -> data << endl;
    cout<<"tail : "<<tail -> data <<endl;
    cout<<"length : "<<length(head) <<endl;*/  
    Node* new1 = NULL;
    new1 = reverseIngroupOfK(head , 2);
    print(new1);

}
