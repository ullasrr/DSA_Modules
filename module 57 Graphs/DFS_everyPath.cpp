#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
int v; //number of vertices
void add_edge(int src,int dest,bool bi_dir=true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

bool dfs(int curr,int end){
    if(curr==end) return true;
    visited.insert(curr); //marked visited
    for(auto neighbour:graph[curr]){
        if(not visited.count(neighbour)){
            bool result=dfs(neighbour,end);
            if(result) return true;
        }

    }
    return false;
}


bool any_path(int src,int dest){
    dfs(src,dest);
}
int main(){
    cout<<"enter no of vertices";   
    cin>>v;
    graph.resize(v,list<int> ());
int e;
cout<<"enter number of edges";
cin>>e;
visited.clear();
while(e--){
    int s,d;
    cout<<" enter s and d: ";
    cin>>s>>d;

    add_edge(s,d,false);
}
int x,y;
cin>>x>>y;
cout<<any_path(x,y);
    

return 0;
}