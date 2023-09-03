#include <bits/stdc++.h>
 using namespace std;
void csg(int n,int ini){

	if(ini==n+1) return;
	cout<<ini<<" ";

	csg(n,ini+1);


}

void dcsg(int n){

	if(n==0) return;

	cout<<n<<" ";

	dcsg(n-1);
}


int main() {

csg(7,1);
cout<<endl;
dcsg(7);
}
