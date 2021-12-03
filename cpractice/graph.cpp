#include <bits/stdc++.h>
using namespace std;

class Graph{

    int v;
    list<int>*a;
    bool *vi;

public:

    Graph(int v){
        this->v = v;
        a = new list<int>[v];
        vi = new bool[v];
    }

    void ae(int v, int w){
        a[v].push_back(w);
    }

    void bfs(int s){
        for(int i=0; i<v; i++){
            vi[i]=false;
        }

        list<int>li;
        vi[s]=true;
        li.push_back(s);

        list<int>::iterator i;

        while(!li.empty()){
            s = li.front();
            cout << s << " ";
            li.pop_front();

            for(i=a[s].begin(); i!=a[s].end(); i++){
                if(!vi[*i]){
                    vi[*i]=true;
                    li.push_back(*i);
                }
            }
        }

        for(int i=0; i<v; i++){
            vi[i]=false;
        }

    }

    void dfs(int v){

        vi[v]=true;
        cout << v << " ";

        list<int>::iterator i;

        for(i=a[v].begin(); i!=a[v].end(); i++){
            if(!vi[*i]){
                dfs(*i);
            }
        }
    }

};

int main(){

    Graph g(4);
    g.ae(0, 1);
    g.ae(0, 2);
    g.ae(1, 2);
    g.ae(2, 0);
    g.ae(2, 3);
    g.ae(3, 3);

    g.bfs(0);
    g.dfs(0);

    return 0;
}