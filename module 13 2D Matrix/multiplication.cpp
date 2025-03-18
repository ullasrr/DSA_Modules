#include<iostream>
using namespace std;


int main(){

    int n,m,p,q;
    cin>>n;
    cin>>m;
    cin>>p;
    cin>>q;

    int res[m][q];


    if(n==p){
        int a[m][n];
        int b[p][q];

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }

        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }

        // resultant matrix
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;

                for(int k=0;k<n;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }

            }
        }
    }
    else{
        cout<<"cannot multiply the matrix"<<endl;
    }


    //print

    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<res[i][j];
        }
        cout<<endl;
    }
return 0;
}