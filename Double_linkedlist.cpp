#include<iostream>
using namespace std;

 class Node {

    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){

        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }

    ~Node(){
        int value = this-> data;
        
        // memory free
        if(this->next != NULL)
        {
            delete next;
            this -> next = NULL;
            this -> prev = NULL;
        }
        cout<< "memory is free for data : "<<value<<endl;
    }
 };

 void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp-> data << " ";
        temp = temp -> next ; 
    }
    cout<<endl;
 }

 int getlength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp -> next ; 
    }
    return len;
 }

 void InsertAthead(Node* &head , int d)
 {
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
 }

void InsertAttail(Node* &tail , int d)
{
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}

void InsertAtPosition(Node* &tail, Node* &head,int  pos, int d){

    if(pos == 1){
        InsertAthead(head,d);
        return;
    }
    Node* nodeToinsert = new Node(d);
    Node* temp = head;
    int cnt =1;
    while( cnt < pos-1)
    {
        temp = temp->next;
        cnt++;
    }

    if( temp -> next == NULL){
        InsertAttail(tail,d);
        return;
    }
    nodeToinsert -> next = temp -> next;
    nodeToinsert -> prev = temp;
    temp -> next -> prev = nodeToinsert;
    temp -> next = nodeToinsert;
  //  nodeToinsert -> prev = head;

}

void Delete(Node* &tail, Node* &head , int pos){

    if( pos == 1){
        Node* temp = head;
        head = head->next;
        head -> prev = NULL;
        temp -> next = NULL;
        delete temp;
    }
    else{
    int cnt =1;
    Node* curr;
    Node* previous;
    curr = head;
    previous = NULL;
    while( cnt < pos)
    {
       previous = curr;
       curr = curr -> next;
       cnt++;
    }
    Node* temp = curr -> next;
    previous -> next = curr -> next;
    if(curr->next != NULL){
    temp -> prev = previous ;
    }
    else{
        tail = previous;
    }
    curr -> next = NULL;
    curr -> prev = NULL;
    delete curr;
    }
}

 int main() {

        Node* node1 = new Node(10);
        Node* head = node1;
        Node* tail = node1;
//       print(head);
//       cout<< getlength(head) << endl;

        InsertAttail(tail,15);
//        print(head);

        InsertAttail(tail,17);
        InsertAttail(tail,25);
        print(head);

        InsertAtPosition (tail , head , 5 ,29);
        print(head);
        cout<< "head : "<< head-> data << endl;
        cout<< "tail : " << tail-> data << endl;

        Delete(tail,head,5);
        print(head);
        cout<< "head : "<< head-> data << endl;
        cout<< "tail : " << tail-> data << endl;
     
 }
