#include<iostream>
#include<vector>
using namespace std;

void sort01(vector<int> &v){
    int noz=0;
    int noo=0;

    for(int i=0;i<v.size();i++){
        if(v[i]==0){
            noz++;
        }
        else{
            noo++;
        }
    }

    for(int i=0;i<noz;i++){
        v[i]=0;
    }
    for(int i=noz;i<v.size();i++){
        v[i]=1;
    }

}

void sort02(vector<int> &v){
    int i=0;
    int j= v.size()-1;
    while(i<=j){
        if(v[i]==1 && v[j]==0){
            swap(v[i],v[j]);

        }
        else if (v[i]==1 && v[j]==1){
            j--;
            continue;
        }
        else if(v[i]==0 && v[j]==0){
            i++;
            continue;
        }

        i++;
        j--;
    }
    return;
}
int main(){

    vector<int> v;
    v={1,1,0,1,0,1,1,0};


    // sort01(v);
    sort02(v);

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
return 0;
}