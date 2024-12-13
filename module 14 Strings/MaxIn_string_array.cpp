#include<iostream>
#include<vector>
using namespace std;


int main(){

    string arr[]={"102","21","212","133","0488"};
    int max=stoi(arr[0]);
    string maxS=arr[0];

    for(int i=0;i<5;i++){
        int x=stoi(arr[i]);
        if(max < x){
            max=x;
            maxS=arr[i];
        } 
    }
    
        cout<<maxS;
return 0;
}