#include<iostream>
#include<queue>
#include<algorithm>
#include<climits>
using namespace std;

class Node{
    public:

    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }

};


Node* construct(int arr[],int n){
    queue<Node*> q;
    Node* root=new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        Node* temp=q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i]!= INT_MIN){
            l=new Node(arr[i]);
        }
        else{
            l=NULL;
        }
        if( j!=n && arr[j]!= INT_MIN){
            r=new Node(arr[j]);
        }
        else{
            r=NULL;
        }
        temp->left=l;
        temp->right=r;

        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        i+=2;
        j+=2;
    }
    return root;
}

void leftboundary(Node* root){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL) return;
    cout<<root->val<<" ";
    leftboundary(root->left);
    if(root->left==NULL){
        leftboundary(root->right);
    }

}

void leafnodes(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) {
    cout<<root->val<<" ";
        return;
    }
    leafnodes(root->left);
    leafnodes(root->right);

}

void rightboundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    rightboundary(root->right);
    if(root->right==NULL){
        rightboundary(root->left);
    }
    cout<<root->val<<" ";
}
   

int main(){

    //construct
    int arr[]={1, 2, 3, 4, 5, INT_MIN, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=construct(arr,n);


    leftboundary(root);
    // cout<<endl;
    leafnodes(root);
    // cout<<endl;
    rightboundary(root->right);
}