#include<iostream>
#include<climits>

using namespace std;


int main(){

    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    int maxsum=INT_MIN;
    int maxIdx=-1;
    int prevSum=0;

    for(int i=0;i<k;i++){
        prevSum=prevSum+arr[i];
    }

    int i=1;
    int j=k;

    while(j<n){
        int currSum=prevSum-arr[i-1]+arr[j];
        if(currSum>maxsum){
            maxsum=currSum;
            maxIdx=i;
        }
        prevSum=currSum;
        i++;
        j++;
    }

    

    cout<<maxsum<<endl;
return 0;
}