#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int>> result;
int v; //number of vertices
void add_edge(int src,int dest,bool bi_dir=true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

void dfs(int curr,int end,vector<int> & path){
    if(curr==end) {
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    };
    visited.insert(curr); //marked visited
    path.push_back(curr);
    for(auto neighbour:graph[curr]){
        if(not visited.count(neighbour)){
            dfs(neighbour,end,path);
            
        }

    }
    path.pop_back();
    visited.erase(curr);
    return;
}


void all_path(int src,int dest,vector<int> &path){
    dfs(src,dest,path);
}
int main(){
    vector<int> path;
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

    add_edge(s,d);
}
int x,y;
cin>>x>>y;
all_path(x,y,path);
cout<<"the paths are :";
for(auto path : result){
    for(auto el:path){
        cout<<el<<" ";
    }
    cout<<endl;
}
return 0;
}