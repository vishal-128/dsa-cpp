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

bool Floyedloopdetection(Node* head){
    Node* slow = head;
    Node* fast = head;
   
    while(fast != NULL){
        fast = fast->next;
        
        if(fast == NULL){
            return false;
        }
        fast = fast->next;
        slow = slow-> next;
        if(slow == fast){
            return true;
        }
    }
    return false;
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
    print(head);

    cout<<"head : "<<head -> data << endl;
    cout<<"tail : "<<tail -> data <<endl;

    tail -> next = head -> next;

    if(Floyedloopdetection(head)){
        cout<< "cycle is present"<<endl;

    }
    else{
        cout<< "cycle is not present"<<endl;
    }
}