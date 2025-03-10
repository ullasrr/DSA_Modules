#include<iostream>
using namespace std;

int maze(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightways=maze(sr+1,sc,er,ec);
    int leftways=maze(sr,sc+1,er,ec);
    int totalways=rightways+leftways;
    return totalways;
}

int main(){

    cout<<maze(0,0,2,2);


return 0;
}