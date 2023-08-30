#include <bits/stdc++.h>

using namespace std;

int f(int index, int n, bool pre_one){

	if(index==n){
		return 1;
	}


	int ans=0;
	ans+=f(index+1,n,false);
	if(pre_one==false){
		ans+=f(index+1,n,true);
	}
	return ans;

}

int main(){

for(int i=1;i<=10;i++){
	cout<<"ans="<<f(1,i,false)<<endl;
}

    return 0;
}
