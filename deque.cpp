#include <iostream>
#include<deque>
using namespace std ;
int main() 
{
    deque<int> d ;
    d.push_back(1) ;
    d.push_front(2) ;
    int n = d.size() ;
    for(int i = 0 ; i<n ; i++)
    {
        cout<<d[i]<<endl ;
    }
    cout<<"print 1st index element "<<d.at(1)<<endl ;
    cout<<"front "<<d.front()<<endl ;
    cout<<"Back "<<d.back()<<endl ;
    
    cout<<"before pop "<<endl ;
    for(int i:d)
    {
        cout<<i<<endl ;
    }
    cout<<"after pop "<<endl ;
    // d.pop_front() ;
    for(int i:d)
    {
        cout<<i<<endl ;
    }
    cout<<"Empty or not "<<d.empty()<<endl ;
    
    cout<<"before erase the size is "<<d.size()<<endl ;
    d.erase(d.begin(),d.begin()+1) ;
    cout<<"After erase size is "<<d.size()<<endl ;
    for(int i:d)
    {
        cout<<i<<endl ;
    }
