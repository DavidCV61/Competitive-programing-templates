#include <bits/stdc++.h>

using namespace std;


int main(){

    map<string,int> p;

   
   p["chocapic"]=29;
   p["choca"]=39;
   p["leche"]=19;
   p["queso"]=25;
    p["chocapic"]=p["chocapic"]+34;
    p["huevos"]=p["huevos"]+14;


        for(map<string,int>::iterator it=p.begin();it != p.end();it++){

    cout<<it->first<<": "<<it->second<<endl;
}






    cout<<p["chocapic"];










    return 0;
}
