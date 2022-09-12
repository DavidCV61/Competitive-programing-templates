#include <bits/stdc++.h>



using namespace std; 

int main(){
int n=3;

vector<pair<int,int>> v(n);



    v[0].first=2;
    v[0].second=4;
     v[1].first=2;
    v[1].second=5;
     v[2].first=5;
    v[2].second=8;



v.push_back({243,5});

sort(v.rbegin(),v.rend());
for(int i=0;i<v.size();i++){

   cout<<"("<<v[i].first<<" , "<<v[i].second<<") \n";
}



/*pair<int,int> p; 
cin>>p.first>>p.second;
cout<<p.first<<" "<<p.second<<"\n";
*/



return 0;
}
