#include<iostream>
using namespace std;


int main(){

    int arr[]={1,2,3,4,7,10,22};
    int s=sizeof(arr) / sizeof(arr[0]);
    int t=23;
    int lo=0;
    int hi=s-1;
    int mid=lo + (hi-lo)/2;
    bool flag=false;
    while(lo<hi){
        mid=lo + (hi-lo)/2;
        if(arr[mid]==t){
            flag=true;
                        cout<<arr[mid-1];
        }
        else if(arr[mid]< t){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    if(flag==false){
        cout<<arr[hi];
    }
return 0;
}