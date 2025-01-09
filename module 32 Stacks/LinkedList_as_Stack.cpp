#include<iostream>
using namespace std;

class Node{
public:
int val;
Node* next;
Node(int val){ 
this->val=val;
this->next=NULL;
}
};

class Stack{
public:
Node* head;
int size;
void push(int val){
    Node* temp=new Node(val);
    temp->next=head;
    head=temp;
    size++;
}

void pop(){
    if(head==NULL){
        cout<<"stack is empty "<<endl;
        return;
    }
    head=head->next;
    size--;
}

int top(){
    if(head==NULL){
        cout<<"stack is empty "<<endl;
        return -1;
    }
    return head->val;
}
};

int main(){
Stack st;

st.push(10);
st.pop();
cout<<st.top();
return 0;
}