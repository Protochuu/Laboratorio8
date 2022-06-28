#include <vector>
using namespace std;

class Graph{
 
vector<vector<int>> adjList;
int n; 
Graph(int n){
    vector<int> list;
    this->n = n; 
    for(int i = 0; i < n; i++){
        adjList.push_back(list);
    }
}
void addEdge(int u, int v){
    adjList[u].push_back(v);
}
bool checkConnectivityDFS(int u){

}
bool checkConnectivityBFS(int u){

}
};

