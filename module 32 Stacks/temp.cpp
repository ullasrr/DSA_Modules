#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[100]={1,2,4,5,6};
    int size=5;
    int num;
    int pos;
    cout<<"The array is-"<<endl;
    for(int i=0;i<size;i++){
    
    cout<<arr[i] ;
    
    }
    
    cout<<"\nEnter the number you want to insert "<<endl;

    cin>>num;
    
    cout<<"Enter the position u want to enter it..."<<endl;
    cin>>pos;
    if(pos>size){

    arr[pos]=num;
    size++;
}
else{
for(int i=0;i<size+1-pos;i++)
arr[pos+i]=arr[pos+1+i];               
arr[pos]=num;

}
for(int i=0;i<=size;i++){
cout<<"The array after insertion is"<<arr[i]<<endl;
}
}