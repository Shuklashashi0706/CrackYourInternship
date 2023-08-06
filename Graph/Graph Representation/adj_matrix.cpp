#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    cout<<"Enter number of nodes:"<<endl;
    cin>>n;
    cout<<"Enter no of edges:"<<endl;
    cin>>m;
    int graph[n][n];
    for(i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        graph[u][v]=1;
        graph[v][u]=1;
    }
  return 0;
}