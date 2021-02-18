#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int x, int y){
    adj[x].push_back(y);
    adj[y].push_back(x);
}

void display(vector<int> adj[], int v){
    for(int i=0; i<v; i++){
        cout<<"vertices connect to "<<i<<" are: ";
        for(int x:adj[i]){
            cout<<" -> "<<x;
        }
        cout<<endl;
    }
};

int main(){
    int V = 5;
    vector<int> adj[V];
    addEdge(adj, 0, 2);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 3, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 3, 4);
    display(adj, V);
}