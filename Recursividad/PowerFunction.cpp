#include <bits/stdc++.h>
 using namespace std;
int pf(int a,int n){


	if(n==0) return 1;

	return a*pf(a,n-1);
}


int main() {

cout<<pf(5,5);
}
