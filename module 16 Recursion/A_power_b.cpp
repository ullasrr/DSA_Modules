#include<iostream>
using namespace std;

int pow(int a,int b){
    if(b==1) return a;

    return a* pow(a,b-1);
}

int main(){
int a,b;
    cout<<"enter a and b:";
    cin>>a;
    cin>>b;
cout<<pow(a,b);
return 0;
}