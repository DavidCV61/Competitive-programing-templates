#include <bits/stdc++.h>
 using namespace std;
int unos(int n, int num){

	if(n==0) return 1;

	if(num==0)return unos(n-1,1) + unos(n-1,0);

	return unos(n-1,0);
	
}


int main() {
cout<<unos(5,0)<<endl;

}
