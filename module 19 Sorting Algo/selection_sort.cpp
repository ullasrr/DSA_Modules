#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;


int main(){

    int arr[]={1,2,56,3,6,7,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size-1;i++){ 
           int min=INT_MAX;


           int minIdx=-1;
        for(int j=i;j<size;j++){
            if(arr[j]<min){
                
                min=arr[j];
                minIdx=j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }



    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}