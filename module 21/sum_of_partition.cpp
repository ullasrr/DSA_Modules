#include<iostream>
using namespace std;

void printArr(int arr[],int value){

    for(int i=0;i<value;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){

    int arr[]={1,2,3,4,5,5,10,10};
int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<n;i++){
        arr[i]=arr[i]+ arr[i-1];
    }
    printArr(arr,n);
    cout<<endl;
int flag=0;

for(int i=0;i<n;i++){
    
    if(arr[i]==(arr[n-1]-arr[i])){
        cout<<i<<endl;
        flag=0;
        break;
    }
    else {
        flag=1;
        continue;}

}
if(flag==1){
    cout<<"cannot be partitioned";
}

return 0;
}
