#include <bits/stdc++.h>
 using namespace std;
int tiles(int n){

	if(n==0) return 1;

	if(n>=4)return tiles(n-4) + tiles(n-1);

	return tiles(n-1);
	
}


int main() {
cout<<tiles(6)<<endl;

}
