#include<bits/stdc++.h>
#define MAX_N 300010
using namespace std;

string T;
string p;
int n;
int RA[MAX_N], tempRA[MAX_N];
int SA[MAX_N], tempSA[MAX_N];
int c[MAX_N];

void countingSort(int k)
    {
        long long i, sum, maxi = max(300010,n);
        memset(c,0,sizeof(c));
        for(int i=0;i<n;i++)
            {
                c[i+k<n?RA[i+k]:0]++;

            }

        for(i=sum=0;i<maxi;i++)
            {
                int t = c[i];
                c[i] = sum;
                sum+=t;
            }

        for(i=0;i<n;i++)
            tempSA[c[SA[i]+k<n ? RA[SA[i]+k] : 0]++] = SA[i];

        for(i=0;i<n;i++)
            SA[i] = tempSA[i];
    }


void constructSA()
    {
        int i,k,r;
        for(i=0;i<n;i++) RA[i] = T[i];
        for(i = 0;i<n;i++) SA[i] = i;

        for(k=1;k<n;k<<=1)
            {
                countingSort(k);
                countingSort(0);
                tempRA[SA[0]] = r= 0;

                for(i=1;i<n;i++)
                    tempRA[SA[i]] = (RA[SA[i]]==RA[SA[i-1]] && RA[SA[i]+k]==RA[SA[i-1]+k])?r:++r;

                for(i=0;i<n;i++)
                    RA[i] = tempRA[i];

                if(RA[SA[n-1]] == n-1) break; 
            }
    }




int main()
    {

        cin>>T;
        string s;


        n = T.size(); 
        T[n++] = '$';  //
        constructSA();

        for(int i=1;i<n;i++){

            int x=SA[i];
            cout<<x<<" ";
            s=T.substr(x, n-1); //O(n);
 
             cout<<s<<endl;



        }






        return 0;
    }
