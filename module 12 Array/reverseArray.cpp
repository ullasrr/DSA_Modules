#include<iostream>
#include<vector>
using namespace std;



int main(){
vector<int> v1;
int n;
vector<int> v2(n,0);
cout<<"enter n"<<endl;
cin>>n;

for(int i=0;i<n;i++){
    int x;
    cout<<"enter element"<<i<<"  ";
    cin>>x;
    v1.push_back(x);
}

for(int i=0;i<n;i++){
    v2[i]=v1[n-i-1];

}


for(int i=0;i<n;i++){
    cout<<v1[i]<<"  ";
}
cout<<endl;


for(int i=0;i<n;i++){
    cout<<v2[i]<<"  ";
}

}