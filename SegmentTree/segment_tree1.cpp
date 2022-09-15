#include <bits/stdc++.h>

using namespace std;

const int MX=1e5+10;
int tree[4*MX];
int v[MX];

void build(int node,int L,int R){

    if(L==R) tree[node]=v[L];
    else{
        int mid=(L+R)/2;
        build(2*node,L,mid); //construir arbol izquierdo
        build(2*node+1,mid+1,R);//onstruir arbol derecho
        tree[node]=tree[2*node]+tree[2*node+1];

    }





}

void update(int node,int L,int R,int index,int value){

    if(index<L or index>R) return;

    if(L==R) tree[node]=value;
    else{

        int mid=(R+L)/2;
        update(2*node,L,mid,index,value); //Actualizar arbol izquierdo
        update(2*node+1,mid+1,R,index,value); //Actualizar arbol derecho
        tree[node]=tree[2*node]+tree[2*node+1];

    }
}
int query(int node,int L,int R,int l,int r){

    if(R<l or r<L) return 0;
    if(l<=L and R <=r)
        return tree[node];
    int mid=(L+R)/2;
    return query(2*node,L,mid,l,r)+query(2*node+1,mid+1,R,l,r);


}





int main(){


    int n;
    cin>>n;
    for(int i=1;i<=n;i++){

        cin>>v[i];
    }

    build(1,1,n);

    for(int i=0;i<20;i++){

        cout<<i<<"\t";
    }

    cout<<endl;


    for(int i=0;i<20;i++){

        cout<<tree[i]<<"\t";
    }
       cout<<endl;

    update(1,1,n,1,20);
     for(int i=0;i<20;i++){

        cout<<i<<"\t";
    }

    cout<<endl;


    for(int i=0;i<20;i++){

        cout<<tree[i]<<"\t";
    }

    cout<<endl<<query(1,1,n,2,4);

    return 0;
}
