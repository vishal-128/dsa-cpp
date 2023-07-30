#include<iostream>
using namespace std;

// for single linked list
class Node{
     public:
     int data ;
     Node* next;

     Node(int d){
        this -> data = d;
        this -> next = NULL;
     }

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

void InsertNode(Node* &tail, int element, int value){

    // no element in the list
    if ( tail == NULL)
    {
        Node* newNode = new Node(value);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
            // assuming element is already present 
            Node* temp = new Node(value);
            Node* curr = tail;
           // tail = temp;
            while(curr->data != element)
            {
                curr = curr->next;
            }
            temp -> next = curr -> next;
            curr -> next = temp;
            
    }
}

void Delete(Node* &tail, int value){
        
        Node* previous = tail;
        Node* current = previous->next;
      
        while( current -> data != value){
            previous = current;
            current = current -> next;
          
        }
        // 1 node linklist
        if(current == previous){
            tail = NULL;
        }
        if(previous->next = tail){  // in case we delete the temp node
            tail = current->next;
        }
        previous -> next = current -> next;
        current -> next = NULL;
        delete current;
}

void print(Node* tail){

    if(tail == NULL){
        cout<< "NO LINKLIST AVAILABLE"<<endl;
    }

    else{
    Node* temp = tail;
 //   if (temp->next == tail){
 // cout << temp -> data << " "; // this is needed for 1st case where only one node is available if use with while, we can also use do while loop
 // }
    do{
        cout<< temp->data << " ";
        temp = temp -> next;

    }while( temp != tail);
    }
    cout << endl;
}

int main(){
  //  Node* tail = NULL;
    Node* node1 = new Node(10);
    node1 -> next = node1; 
    Node* tail = node1;
    InsertNode(tail, 10, 15);
    print(tail);

    InsertNode(tail, 15, 25);
    print(tail);

    InsertNode(tail, 25, 35);
    print(tail); 

    Delete(tail,10);
    print(tail);
}