#include <bits/stdc++.h>


using namespace std;


int gcd(int a,int b){
    
    if(b==0) return a;
    gcd(b,a%b);
    
    
    
    
}


int main(){
    
    int a=8;
    int b=20;
    
    cout<<gcd(a,b);
    
    
    
    
    
    return 0;
}
