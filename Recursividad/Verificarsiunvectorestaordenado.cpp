#include <bits/stdc++.h>
 using namespace std;
bool check(vector <int> &v,int n, int pos){
	if(n==1 || n==0) return true;

	if(v[pos+1]>v[pos] && check(v,n-1,pos+1))return true;
	
return false;
	

}




int main() {

	vector <int> v={5,6,7,8,30,10,11};
	int n=v.size();

	cout<<check(v,n,0);

}
