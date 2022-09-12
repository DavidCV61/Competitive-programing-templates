#include <bits/stdc++.h>

using namespace std;
vector<int> Grafo[100];
int visitado [100];

void bfs(int nodo){
    int u,v;

    queue <int> q;

    q.push(nodo);
    visitado[nodo]=0;


    while(!q.empty()){
        u=q.front();
        q.pop();
        for(int i=0;i<Grafo[u].size();i++){

            v=Grafo[u][i];

            if(visitado[v] == -1){
                q.push(v);
                visitado[v]=visitado[u]+1;


            }


        }




    }




}


int main(){

    Grafo[1].push_back(2);
    Grafo[2].push_back(4);
    Grafo[4].push_back(5);
    Grafo[1].push_back(2);
    Grafo[3].push_back(1);
    Grafo[3].push_back(6);
    Grafo[3].push_back(7);
    Grafo[7].push_back(8);

    for(int i=1;i<=8;i++){

        visitado[i]=-1;
}

    for(int i=0;i<=8;i++){

        cout<<"Nodo "<<i<<": ";
        for(int j=0;j<Grafo[i].size();j++ ){

            cout<< Grafo[i][j]<<" , ";
        }
        cout<<endl;
    }

    bfs(3);

    for(int i=1;i<=8;i++){

        cout<<visitado[i]<<" ";
}


    return 0;
}
