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

Node* MergeSort(Node* &head , Node* head2){

    if(head -> next == NULL){
        head->next = head2;
        return head;
    }

    Node* temp = head2;
    Node* curr = head -> next;
    Node* prev = head;

        while(temp != NULL ){
            
            if(temp -> data <= curr->data  && temp-> data >= prev->data){
                head2 = temp->next;
                prev->next = NULL;
                temp->next = NULL;
                prev -> next = temp;
                temp->next = curr;
                prev = temp;
            }
            
            else{
                prev = curr;
                curr = curr-> next;

                if( curr == NULL ){              
                prev -> next = head2;
                return head;   
                }
            }
            temp = head2;
        }
        return head;
    }

// jo list ma phela element kam hoga vo mera 1 list hoga
Node* beginMergeSort(Node* head, Node* head2){
    Node* merge = NULL;
    if(head->data <= head2->data ){
       merge =  MergeSort(head,head2);
    }
    else{
      merge = MergeSort(head2,head);
    }
    return merge;
}
int length(Node* head){
    int n = 0;
    while(head != NULL){
        n++;
        head = head->next;
    }
    cout<<" length : " <<n<<endl;
    return n;
}

void checkPalindrome(int arr[] ,int n){

    int s = 0, e = n-1;
    while(s <= e){
        if(arr[s] == arr[e]){
            s++;
            e--;
        }
        else{
            cout<<"NOT PALINDROME";
        }
    }
    cout<<"PALLINDROME";

}

int StoreinArray(Node* head){
    int* arr = new int[length(head)];
    int i=0;
    while(head != NULL){
        arr[i] = head->data;
        i++;
        head = head->next;
    }
    checkPalindrome(arr,i);
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
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    // defining node1 as head
    Node* head = node1;
    Node* tail = node1;

    // inserting a new node
    InsertAtTail(tail , 1);
    InsertAtTail(tail, 2);
    InsertAtTail(tail, 1); 
    InsertAtTail(tail, 1); 
    print(head); 

    Node* head2 = node2;
    Node* tail2 = node2;
    InsertAtTail(tail2 , 3);
    InsertAtTail(tail2, 5);
    InsertAtTail(tail2, 7);
    InsertAtTail(tail2, 8);
    print(head2);

//    Node* Top = beginMergeSort(head,head2);
//    print(Top);

    StoreinArray(head);
}