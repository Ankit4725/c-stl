#include<bits/stdc++.h>
using namespace std ;
int main() {
   map<int,string> m ;
   m[1] = "Love" ;
   m[2] = "babbar" ;
   m[3] = "kumar" ;
   m[0] = "audi"  ;

  m.insert({5,"bheem"}) ;
  cout<<"0 is present or not "<<m.count(0)<<endl ;

   cout<<"before erase "<<endl ;
   for(auto i:m)
   {
        cout<<i.first<<" "<<i.second<<endl ;
   }
   m.erase(0) ;
   cout<<"after erase "<<endl ;
   cout<<"0 is present or not "<<m.count(0)<<endl ;
   for(auto i:m)
     {
       cout<<i.first<<endl ;
     }cout<<endl ;
     
  auto it = m.find(5) ;
  for(auto i=it ; i!=m.end() ; i++)
    {
      cout<<(*i).first<<endl ;
    }
}
