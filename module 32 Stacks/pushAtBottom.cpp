#include<iostream>
#include<stack>
using namespace std;


int main(){
    stack<int> st1;
    stack<int> st2;
    int bottom=3;
    st1.push(10);
    st1.push(20);
    st1.push(30);
    st1.push(40);
    while(st1.size()>0){
        int x=st1.top();
        st2.push(x);
        st1.pop();
    }
    st1.push(bottom);
    while(st2.size()>0){
        int y=st2.top();
        st1.push(y);
        st2.pop();
    }

    while(st1.size()> 0){
        cout<<st1.top();
        st1.pop();
        cout<<endl;
    }
    
return 0;
}