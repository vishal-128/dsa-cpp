#include<iostream>
#include<queue>
using namespace std;

class node{
    public:

    int data;
    node* left;
    node* right;

    node(int d){
        this -> data = d;
        this -> right = NULL;
        this -> left = NULL;
    }

};

node* BuildTree(node* root){
    int data;
    cout<< " enter number to the node :"<<endl;
    cin>> data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }
    cout<< "enter element to the left node :"<<endl;
    root -> left = BuildTree(root -> left);
    cout<< "enter element to the right node :"<<endl;
    root -> right = BuildTree(root -> right);
    return root;
}

void TraverseTreeSectionWise(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    

    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }

       else{
        cout<< temp -> data << " ";
        if( temp -> left){
            q.push(temp -> left);
        }
        if(temp -> right){
            q.push(temp -> right);
            }
        }
    }
}
int main(){

    node* root = NULL;
    root = BuildTree(root);
    TraverseTreeSectionWise(root);
}
