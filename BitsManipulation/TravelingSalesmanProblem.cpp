#include <bits/stdc++.h>

using namespace std;

int tsp(vector <vector<int>> dist, int Setofcities, int city,int n){

	if(Setofcities==(1<<n)-1){

		return dist[city][0];
	}

	int ans=INT_MAX;

	for(int choice=0;choice<n;choice++){

		if((Setofcities & (1<<choice))==0){
			int subPro =dist[city][choice]+tsp(dist,Setofcities|(1<<choice),choice,n);
			ans=min(ans,subPro);
		}
	}
	return ans;

}



int main(){

	vector <vector <int>> dist={

		{0,20,42,25},
		{20,0,30,34},
		{42,30,0,10},
		{25,24,10,0}


	};
cout<<tsp(dist,1,0,4);




	return 0;



	}




