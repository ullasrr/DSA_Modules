#include<iostream>
#include<algorithm>
using namespace std;


int main(){

    int arr[]={1,2,56,3,6,7,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        for(int j=1;j<size-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
            else{
                continue;
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}