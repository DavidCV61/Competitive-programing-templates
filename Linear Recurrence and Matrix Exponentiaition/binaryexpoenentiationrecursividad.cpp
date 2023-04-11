#include<bits/stdc++.h>

using namespace std;
const long long mod =1e9+7;


long long power(long long a, long long n){
    long long p;
    if(n==0){
        return 1;
    }
    p=power(a,n/2);
    p=(p*p)%mod;
    if(n%2){
        p=(p*a)%mod;
    }
    return p;
}

int main()
{
	int t;
	cin>>t;

	while(t--){
		long long A,N;
		cin>>A>>N;
		int n=power(A,N);
		if(n==0){
			n=9;
		}
		cout<<n<<endl;


	}
	



	return 0;

}
