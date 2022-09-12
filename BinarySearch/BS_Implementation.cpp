#include <bits/stdc++.h>
 
using namespace std;

vector <int> v;
int bs(int N,int x){
    
    int R=N-1;
    int L=0;
    int mid;
    while(L<=R){
     mid=L+(R-L)/2;
     if(v[mid]==x) return mid;

    if(v[mid]<x) L=mid+1;
    else R=mid-1;
        
    }
    return -1;
    
    
 
}
 
int main(){
 
   int N=6;
 v={1,3,4,5,7,15};

 
        cout<<bs(N,2)<<endl;
        cout<<bs(N,5)<<endl;
 
 
 
 
 
 
    return 0;
 
}
