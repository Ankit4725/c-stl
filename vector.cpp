#include<bits/stdc++.h>
#include<vector>
using namespace std ;
int main()
{
  vector<int> a(4,2) ;
  cout<<"capacity "<<a.capacity()<<endl ;
  int n = a.size() ;
  vector<int> l(a) ;
  for(int i = 0 ; i<n ; i++)
  {
      cout<<l[i]<<" "<<endl ;
  }
  cout<<"capacity "<<l.capacity()<<endl ;
  cout<<"Size----> "<<a.size()<<endl ;
  cout<<"Capacity---> "<<a.capacity()<<endl ;
  
  a.push_back(1) ;
  cout<<"Capacity--- "<<a.capacity()<<endl ;
  a.push_back(2) ;
  cout<<"Capacity--- "<<a.capacity()<<endl ;
  a.push_back(3) ;
  cout<<"Capacity--- "<<a.capacity()<<endl ;
  cout<<"Size -> "<<a.size()<<endl ;
  
  cout<<"Element at 2nd index "<<a.at(2)<<endl ;
  cout<<"front "<<a.front()<<endl ;
  cout<<"back "<<a.back()<<endl ;
  
  cout<<"before pop"<<endl ;
  for(int i:a)
  {
      cout<<i<<" " ;
  }cout<<endl ;
  a.pop_back() ;
  cout<<"after pop"<<endl ;
  for(int i:a)
  {
      cout<<i<<" " ;
  }cout<<endl ;
  cout<<"Empty or not "<<a.empty()<<endl ;
  cout<<"before clear size "<<a.size()<<endl ;
  a.clear() ;
  cout<<"after clear size "<<a.size()<<endl ;
  cout<<"Empty or not "<<a.empty()<<endl ;
  
  
  
  
  
}
