#include <bits/stdc++.h>
 using namespace std;
void find(char *input,char *output,int i, int j){

	if(input[i]=='\0'){
		output[j]='\0';

		if(output[0]=='\0')cout<<"NULL"<<endl;
		cout<<output<<endl;
		return;
	}

	output[j] =input[i];
	find(input,output,i+1,j+1);
	
	find(input,output,i+1,j);

}

int main() {
char input[100];
char output[100];
cin>>input;

find(input,output,0,0);

}
