#include<iostream>
#include<list>
#include<limits.h>
// #define int unsigned long long int
using namespace std;

class graph{
    int vertices;
    list<int> *edges;
    int *age;
public:
    graph(int vertices);
    void addEdge(int source, int destination);
    void enterAges();
    int getAnswer();
    int findDistance(int a, int b);
    int dist(int node, int dest, bool *visited, int distance);

    // void BFSstep(int node, bool *visited, int level)
};

graph::graph(int vertices){
    this->vertices = vertices;
    edges = new list<int>[vertices+1];
    age = new int[vertices];
}

void graph::addEdge(int source, int destination){
    edges[source].push_back(destination);
    edges[destination].push_back(source);
}
 
void graph::enterAges(){
    for(int i = 1; i <= vertices; ++i){
        cin >> age[i];
    }
}

int graph::dist(int node, int dest, bool *visited, int distance){
    if(node == dest)return distance;
    for(list<int>::iterator itr = edges[node].begin(); itr!=edges[node].end(); ++itr){
        if(!visited[*itr]){
            visited[*itr] = true;
            return (1 + dist(*itr,dest,visited,1+distance));
        }
    }
    return ((-1* distance)-200);    
}

int graph::findDistance(int a, int b){
    bool *visited = new bool[vertices + 1];
    for(int i = 1; i < vertices; ++i)visited[i]=false;
    visited[a] = true;
    list<int>::iterator itr = edges[a].begin();
    int n = dist(*itr,b,visited,1);
    ++itr;
    int m = dist(*itr,b,visited,1);
    return (n>m)?n:m;
}

int graph::getAnswer(){
    int ans = 0;
    for(int i = 1; i <= vertices; ++i){
        for(int j = i+1; j <= vertices; ++j){
            int k = (age[i]^age[j]);
            int bits = 0;
            while(k!=0){
                if(k%2 == 1)bits++;
                k = (k>>1);
            }
            if(findDistance(i,j)%2 != bits%2){
                ans++;
            }
        }
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        graph g(n);
        for(int i = 1; i < n; ++i){
            int a,b;
            cin >> a >> b;
            g.addEdge(a,b);
        }
        g.enterAges();
        cout << g.getAnswer() << endl;
    }
    return 0;
}