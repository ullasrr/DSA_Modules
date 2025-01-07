#include<iostream>
#include<queue>
using namespace std;


int main(){
    int arr[]={10,20,-4,5,18,24,1,-7,56};
    int k=4;
    priority_queue<int> pq;

    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>4){
            pq.pop();
        }
    }

return 0;
}