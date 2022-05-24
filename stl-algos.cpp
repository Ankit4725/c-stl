#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
  vector<int> v;
  v.push_back(1);
  v.push_back(3);
  v.push_back(5);
  v.push_back(7);

   int a = 3 ;
   int b = 5 ;
   cout<<"max "<<max(a,b)<<endl ;
   cout<<"min "<<min(a,b)<<endl ;
   swap(a,b) ;
   cout<<"find 6 "<<binary_search(v.begin(),v.end(),6)<<endl;
   cout<<"lower bound "<<lower_bound(v.begin(),v.end(),3)-v.begin()<<endl ;
   cout<<"upper "<<upper_bound(v.begin(),v.end(),5)-v.begin()<<endl;
   cout<<"new value of a "<<a<<endl ;
   cout<<"new value of b "<<b<<endl ;
   string abcd = "abcd" ;
   reverse(abcd.begin(),abcd.end()) ;
   cout<<abcd<<endl ;
    rotate(v.begin(),v.begin()+1,v.end()) ;
    for(int i:v)
    {
    cout<<i<<" "<<endl ;
    }
    sort(v.begin(),v.end()) ;
    cout<<"after sorting"<<endl ;
    for(int i:v)
    {
        cout<<i<<" " ;
    }
}
