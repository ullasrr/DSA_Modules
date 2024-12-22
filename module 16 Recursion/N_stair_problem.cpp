#include<iostream>
using namespace std;

int stair(int num){

    if(num==1) return 1;
    if(num==2) return 2;
    return stair(num-1)+ stair(num-2);
    
}

int main(){

    cout<<stair(6);

return 0;
}