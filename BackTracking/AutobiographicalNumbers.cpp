#include <bits/stdc++.h>
using namespace std;
void imprimirVector(const std::vector<int>& vec) {
    for (const int& elemento : vec) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;
}
bool check(vector <int> bio, vector <int> ct,int k){
	for(int i=0;i<=k;i++) if(ct[i]>bio[i]) return false;
		return true;
}

bool checkfinal(vector <int> bio, vector <int> ct,int k){
	for(int i=0;i<k;i++) if(ct[i]!=bio[i]) return false;
		return true;
}

 
 bool solver(int n,int pos, string s, int x,vector <int> bio, vector <int> ct){



 	if(pos==n-1){

 		if(checkfinal(ct,bio,n)){
 			cout<<s<<endl;
 			return true;

 		}
 		return false;
 			

 	}

 	for(int i=0;i<=9;i++){
 		
 		ct[i]++;
 		bio[pos+1]=i;
 		//cout<<"i="<<i<<endl;
 		//cout<<"ct["<<i<<"]="<<ct[i]<<endl;
 		//cout<<"bio["<<pos+1<<"]="<<i<<endl;
 		

 		if(check(bio,ct,pos+1)){
 			string t=to_string(i);

 			return solver(n,pos+1,s+t,i, bio,ct);
 		}
 		ct[i]--;
 		bio[pos+1]=0;
 		s[pos+1]='\0';
 		//cout<<endl;



 	}
 	return false;
 }


int main() {

	string s="2";
	vector <int> ct(10,0);
	vector <int> bio(10,0);
	ct[2]++;
	bio[0]=2;
	int n;
	cin>>n;
		cout<<solver(n,0,s,2,bio,ct);





}
