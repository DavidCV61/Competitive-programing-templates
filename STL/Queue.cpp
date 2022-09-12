#include<bits/stdc++.h>

using namespace std;

int main(){
queue <int> q;
q.push(10);
q.push(20);
q.push(30);

 cout << "\ngquiz.size() : " << q.size();
 cout << "\ngquiz.front() : " << q.front();
 cout << "\ngquiz.back() : " << q.back()<<endl;


while(!q.empty()){
cout<<q.front()<<endl;
q.pop();


}




    return 0;
}
