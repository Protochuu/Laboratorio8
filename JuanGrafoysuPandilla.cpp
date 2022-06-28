#include <vector>
using namespace std;

class Graph{
 
vector<vector<int>> adjList;

Graph(int n){
    vector<int> list;
    for(int i = 0; i < n; i++){
        adjList.push_back(list);
    }
}
void addEdge(int u, int v){
    

}
bool checkConnectivityDFS(int u){

}
bool checkConnectivityBFS(int u){

}
};

