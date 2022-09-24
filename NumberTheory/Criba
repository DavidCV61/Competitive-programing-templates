#include <bits/stdc++.h>

using namespace std;

bool primo(int x){

	int raiz=sqrt(x)+1;
	if(x==2) return true;
	if(x%2==0) return false;
	for(int i=3;i<=raiz;i+=2){

		if(x%i==0){
			return false;
		}
	}

	return true;




}

vector<bool> is;
void criba(int n){
is.assign(n+1,true);
is[0]=is[1]=false;
for(int i=2;i<=n;i++){

	if(is[i]==true){

		for(int j=i*2;j<=n;j=j+i){
			is[j]=false;
		}
	}

}
}


int main(){
	

	cout<<primo(7)<<endl;
	cout<<primo(9)<<endl;
	cout<<primo(71)<<endl;
	cout<<primo(57)<<endl;


   

    return 0;
}
