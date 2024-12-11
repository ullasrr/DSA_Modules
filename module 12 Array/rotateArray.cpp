#include<iostream>
#include<vector>
using namespace std;

void rotateA(int i,int j, vector<int> & v){
    while(j>=i){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--; 
    }
    return;
}

int main(){
    vector<int> v;
    v={1,2,3,4,5,6};
int k;
cout<<"enter the part till where it has to be reversed "<<endl;
cin>>k;

while(k>v.size()){
    k=k%v.size();
}

rotateA(0,v.size()-k-1,v);
rotateA(v.size()-k,v.size()-1,v);
rotateA(0,v.size()-1,v);

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}


}