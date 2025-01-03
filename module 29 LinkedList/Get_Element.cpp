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

class LinkedList{
public:
Node* head;
Node* tail;
int size;

LinkedList(){
    this->size=0;
    this->head=NULL;
    this->tail=NULL;
}

int getEle(Node* head,int idx){
    
}

};

int main(){

    

return 0;
}