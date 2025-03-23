#include<iostream>
using namespace std;

int partition(int arr[],int si,int ei){
    int pivot=arr[si];
    int count=0;
    for(int i=si+1;i<=ei;i++){
        if(pivot>=arr[i]) count++;
    }

    int pivotIdx= si+count;
    swap(arr[si],arr[pivotIdx]);
    int i=si;
    int j=ei;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivot) i++;
        if(arr[j]>pivot) j--;
        else if(arr[i]>pivot && arr[j]<=pivot) {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}

void quicksort(int arr[],int si,int ei){
    if(si>=ei){
    return;
    }
    int pivotIdx=partition(arr,si,ei);
    quicksort(arr,si,pivotIdx-1);
    quicksort(arr,pivotIdx+1,ei);

}

int main(){

    int arr[]={5,1,8,2,7,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }

    quicksort(arr,0,n-1);
cout<<endl;
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}