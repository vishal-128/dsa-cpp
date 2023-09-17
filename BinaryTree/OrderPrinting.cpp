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

// without recursion tree Building level order

node* BuildlevelOrder(node* root){
    queue<node*> q;
    int data;
    cout<< " enter root node data :"<<endl;
    cin>>data;
    root = new node(data); 
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();
  
    cout<< " enter data to the left of "<< root-> data <<endl;
    int leftdata;
    cin >> leftdata;

    if(leftdata != -1){
        temp -> left = new node(leftdata);
        q.push(temp->left);
    }

    cout<< " enter data to the right of "<< root-> data <<endl;
    int rightdata;
    cin >> rightdata;

    if(rightdata != -1){
        temp -> right = new node(rightdata);
        q.push(temp->right);
    }
  }
}

// L-N-R
void Inorder(node* root){
    // base case
    if(root == NULL){
        return ;
    }

    Inorder(root -> left);
    cout<< root -> data << " ";
    Inorder(root -> right);
    
}

void Preorder(node* root){
    // base case
    if(root == NULL){
        return ;
    }

    cout<< root -> data << " ";
    Preorder(root -> left);
    Preorder(root -> right);
    
}

void Postorder(node* root){
    // base case
    if(root == NULL){
        return ;
    }

    Postorder(root -> left);
    Postorder(root -> right);
    cout<< root -> data << " ";

    
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

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    node* root = NULL;
    root = BuildTree(root);
    TraverseTreeSectionWise(root);
    cout<<endl <<"Inorder traversal " <<endl;
    Inorder(root);

    cout<<endl <<"Preorder traversal " <<endl;
    Preorder(root);

    cout<<endl <<"Postorder traversal " <<endl;
    Postorder(root);
}
