
#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
 vector<int>  v;
for(int i=0; i<n; i++){

    int x;
    cin>>x;
    v.push_back(x);
}/*
v.pop_back();
v.push_back(-100);
cout<<"[";
for(int i=0; i<v.size();i++){

    cout<<v[i]<<" ";
}

cout<<"]"<<endl;
    */

//sort(v.begin(),v.end());
sort(v.rbegin(),v.rend());
    cout<<"[";
for(int i=0; i<v.size();i++){

    cout<<v[i]<<" ";
}

cout<<"]"<<endl;
    return 0;

}
