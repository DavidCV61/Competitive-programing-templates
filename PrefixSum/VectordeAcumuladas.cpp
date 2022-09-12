#include <bits/stdc++.h>



using namespace std; 

int main(){
int n=8;
int acum=0;
int x1, x2;
int suma;
int swt;



int array[n]={ 2 , 3, -1, 5, 8, -12, 3, -3};
int va[n+1]={};

va[0]=0;

for(int i=1;i<=n;i++){

va[i]=va[i-1]+array[i-1];



    
}
cout<<"[ ";
for(int j=0; j<=n;j++){
  
cout<<va[j]<<" ";



}
cout<<" ]";



}
