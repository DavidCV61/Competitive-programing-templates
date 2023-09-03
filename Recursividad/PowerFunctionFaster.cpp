#include <bits/stdc++.h>
 using namespace std;
int power(int a,int n){


	if(n==0) return 1;

	int sub=power(a,n/2);
	int sub2=sub*sub;
	if(n&1) return a*sub2;

	return sub2;
}


int main() {

cout<<power(5,5);
}
