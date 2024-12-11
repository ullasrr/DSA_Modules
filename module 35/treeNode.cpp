#include <bits/stdc++.h>
using namespace std;

class TreeNode{
    public:

    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;

    }
    
};

void display(TreeNode* root){
    if(root==NULL) return;
    cout<<root->data<<"  ";
    display(root->right); 
    display(root->left);

}

int sum(TreeNode* root){
    if (root==NULL) return 0;

    return root->data+ sum(root->left)+ sum(root->right);

     

}


int size(TreeNode* root){
    if(root==NULL) return 1;
    

    return size(root->left) + size(root->right);
}

int maximum(TreeNode* root){
    if(root==NULL) return INT_MIN;
    int lmax=maximum(root->left);
    int rmax=maximum(root->right);

    return max(root->data,max(lmax,rmax));
}
int main(){

TreeNode* a=new TreeNode(1);
TreeNode* b=new TreeNode(2);
TreeNode* c=new TreeNode(3);
TreeNode* d=new TreeNode(4);
TreeNode* e=new TreeNode(5);
TreeNode* f=new TreeNode(6);
TreeNode* g=new TreeNode(7);

a->left=b;
a->right=c;
b->left=d;
b->right=e;
c->left=f;
c->right=g;

display(a);
int x=sum(a);
cout<<endl;
cout<<x;
cout<<endl;

cout<<size(a)-1;
cout<<endl;
cout<<maximum(a);
}