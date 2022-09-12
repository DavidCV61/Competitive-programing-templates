#include <bits/stdc++.h>

using namespace std;


int main(){
//Matriz de adyacencia
//Lista de adyacencia
//Lista de arcos

int nodos,aristas;
cin>>nodos>>aristas;

vector <int> Ladj[nodos];

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


    return 0;
}
