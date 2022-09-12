#include <bits/stdc++.h>



using namespace std; 

int main(){
unordered_set <int> a;

a.insert(3);
a.insert(4);
a.insert(6);
a.insert(1);
a.insert(-1);
a.insert(4);
a.insert(6);

cout<<"unordered_set:"<<endl;

cout<<a.size()<<endl;
for(unordered_set<int>::iterator it=a.begin(); it != a.end(); it++)
{

    cout<<*it<<endl;
}

set <int> b;

b.insert(3);
b.insert(4);
b.insert(6);
b.insert(1);
b.insert(-1);
b.insert(4);
b.insert(6);

cout<<"set:"<<endl;

cout<<b.size()<<endl;
for(set<int>::iterator it=b.begin(); it != b.end(); it++)
{

    cout<<*it<<endl;
}





return 0;
}
