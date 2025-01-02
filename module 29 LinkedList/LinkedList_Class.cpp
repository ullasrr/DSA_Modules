#include<iostream>
using namespace std;

class Node{ // User defined data type 

    public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next=NULL;
    }

};

class LinkedList{  // User defined data structure
    public:
    Node* head;
    Node* tail;
    int size;

    LinkedList(){
        this->size=0;
        this->head=NULL;
        this->tail=NULL;
    }


void InsertAtEnd(int val){
        Node* temp=new Node(val);
        if(size==0){
            head=tail=temp;

        }
        else{
            tail->next=temp;
            tail=temp;
        }
            size++;
    }

void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
}

void InsertAtHead(int val){
        Node* temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            temp->next=head;
            head=temp;
        }
        size++;

}

void Insert(int idx,int val){
    if(idx<0 || idx> size){
        cout<<"index cannot be negative "<<endl;
    }
    else if(idx==0){
        InsertAtHead(val);
        size++;
    }
    else if(idx==size){
        InsertAtEnd(val);
        size++;
    }
    else{
    Node* t=new Node(val);
    Node* temp=head;
    while(idx-1!=0){
        temp=temp->next;
        idx--;
    }
    t->next=temp->next;
    temp->next=t;

    size++;

    }
}

};


int main(){
LinkedList* ll=new LinkedList();   // Here the part of arrow is important 
ll->InsertAtEnd(10);               // If the class was made statically then we have to use dot operator
ll->InsertAtEnd(20);               // As I created it dynamically, I'm using arrow operator
ll->InsertAtEnd(30);
ll->InsertAtEnd(40);
ll->InsertAtHead(50);
ll->InsertAtHead(24);
ll->display();
ll->Insert(4,80);
ll->display();
cout<<ll->size;
return 0;
}