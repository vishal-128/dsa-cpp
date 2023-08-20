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

Node* Floyedloopdetection(Node* head){
    Node* slow = head;
    Node* fast = head;
   
    while(fast != NULL){
        fast = fast->next;
        
        if(fast == NULL){
            return fast;
        }
        fast = fast->next;
        slow = slow-> next;
        if(slow == fast){
            return slow;
        }
    }
    return fast;
}

Node* startingofloop(Node* head){

    Node* temp = Floyedloopdetection(head);
    Node* slow = head;
    Node* fast = temp;
    while(slow != fast){
        slow = slow -> next ;
        fast = fast -> next ;
    }
    return slow;

}

void removeLoop(Node* head){

    Node* startloop = startingofloop(head);
    Node* temp = startloop -> next;

    while (temp -> next != startloop){
        temp = temp-> next;
    }
    temp -> next = NULL ;
}

Node* removeDuplicateSorted(Node* &head){

    if(head == NULL){
        return NULL;
    }
    else{
    Node* curr = head;
    while( curr->next != NULL)
    {
        if( curr->data == curr->next->data){
            Node* forward = curr -> next ;
            curr -> next = forward-> next;
            forward -> next = NULL;
            delete(forward);
            
        }
        else{
            curr = curr -> next;          
        }
    }
    return head;
}
}

Node* removeDuplicateUnsorted(Node* &head){
    if(head == NULL){
        return NULL;
    }
    else {
        Node* element = head ;
        
        while(element != NULL) {
            Node* curr = element ;
            while( curr != NULL)
            {
                Node* forward = curr -> next;
                if((forward != NULL) && element->data == forward -> data){
                    curr -> next = forward -> next;
                    forward -> next = NULL;
                    delete (forward);
                    
                }
                else{
                    curr = curr-> next;
                }
            }
        element = element -> next ;
        }
    return head;
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
    InsertAtTail(tail , 21);
    InsertAtTail(tail, 15);
    print(head);

    InsertAtPosition(tail , head , 4 , 21);
    InsertAtPosition(tail , head , 4 , 20);
    InsertAtPosition(tail , head , 6 ,20 );
    print(head);

    cout<<"head : "<<head -> data << endl;
    cout<<"tail : "<<tail -> data <<endl;

    tail -> next = head -> next;

    Node* temp1 = Floyedloopdetection(head);
    if(temp1 != NULL){
        cout<< "cycle is present"<<endl;

    }
    else{
        cout<< "cycle is not present"<<endl;
    } 

    Node* check = startingofloop(head);
    cout<< "starting of loop : "<< check -> data <<endl;

    removeLoop(head);
    cout<<"loop is removed"<< endl;
    print(head);

 //  Node* temp2 = removeDuplicateSorted(head);
 //  print(head);
 
    Node* temp3 = removeDuplicateUnsorted(head);
    print(head);
    
}