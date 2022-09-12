#include <bits/stdc++.h>
using namespace std;

int main(){


 vector<int>  v;
  vector<int>  u(6);

  u[0]=1;
  u[2]=-56;
  u[4]=7;
  u.push_back(5);


cout<<"[";
for(int i=0; i<u.size();i++){

    cout<<u[i]<<" ";
}

cout<<"]"<<endl;
    cout<<"u.front()="<<u.front()<<endl;
    cout<<"u.back()="<<u.back()<<endl;
    cout<<"u.empty()="<<u.empty()<<endl;
    cout<<"u.size()="<<u.size()<<endl;
    
    return 0;

}
