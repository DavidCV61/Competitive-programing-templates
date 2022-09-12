#include <bits/stdc++.h>

using namespace std;
bool visitados[10000];
vector <int> Ladj[10000];


void dfs(int u){
    cout<<"Visitando"<<u<<endl;

    visitados[u]=true;
    for(int i=0;i<Ladj[u].size();i++){


        int nododestino=Ladj[u][i];

        if(!visitados[nododestino]) dfs(nododestino);
        
            }
}


int main(){
//Matriz de adyacencia
//Lista de adyacencia
//Lista de arcos

int nodos,aristas;
cin>>nodos>>aristas;



for(int i=0;i<aristas;i++){
    int u,v;

    cin>>u>>v;
    Ladj[u].push_back(v);
}
for(int i=0;i<nodos;i++){
    cout<<"nodo "<<i<<"= [";

    for(int j=0;j<Ladj[i].size();j++){

        cout<<Ladj[i][j]<<" , ";
    }
    cout<<"]"<<endl;
}

cout<<"Dfs 1:"<<endl;

   dfs(1);

   for(int i=0;i<nodos;i++) visitados[i]=false;
   cout<<"Dfs 2:"<<endl;

   dfs(2);


    return 0;
}
