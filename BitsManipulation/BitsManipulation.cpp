
#include <bits/stdc++.h>

using namespace std;
int getIthBit(int n,int i){

	int mask=(1<<i);
	return n&mask> 0?1:0;

}
void setIthBit(int &n,int i){

	int mask= (1<<i);

	 n=(n|mask);

}

void clearIthBit(int &n,int i){

	int mask= ~(1<<i);
	 n=n&mask;
}

void updateIthBit(int &n,int i, int v){

	clearIthBit(n,i);
	int mask= (v<<i);
	 n=n|mask;
}

void clearLastBits(int &n, int i){
	int mask=(-1<<i);
	n=n&mask;
}

void clearRangeBits(int &n, int i, int j){
	int a=(~0)<<(j+1);
	int b=(1<<i)-1;
	int mask=a|b;
	n=n&mask;
}
void ReplaceRangeBits(int &n, int i, int j, int m){
	clearRangeBits(n,i,j);

	int mask=(1<<m);
	n=n|mask;
}

int count_bits(int n){
	
	int cnt = 0;

	while(n>0){
		int last_bit = (n&1);
		cnt += last_bit;

		n = n>>1;
	}
	return cnt;
}
int count_bits_hack(int n){

	int ans = 0;
	while(n>0){
		//removes the last set bit from the current number
		n = n & (n-1);
		ans++;
	}

	return ans;

}

int main()
{
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

 






  	   return 0;
  
}
