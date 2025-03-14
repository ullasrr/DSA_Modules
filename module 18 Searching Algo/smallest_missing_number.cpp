#include<iostream>
using namespace std;


int main(){

    int arr[]={0,1,2,3,4,6,8,9,10};
int lo=0;
int hi=9;    
int ans=-1;
while(lo<=hi){
    int mid=lo+ (hi-lo)/2;
    if(arr[mid]==mid){
        lo=mid+1;
    }
    else{
        ans=mid;
        hi=mid-1;
    }

}
cout<<ans<<endl;
return 0;
}