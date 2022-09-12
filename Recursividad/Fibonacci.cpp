#include <bits/stdc++.h>



using namespace std; 
int fibo(int n){
    if(n==0){
    return 0;}
     if(n==1){
    return 1;}

    cout<<n<<" ";
    return fibo(n-1)+fibo(n-2);
}

int main(){

int n;
cin>>n;
cout<<"fibo: "<<fibo(n);




return 0;
}
