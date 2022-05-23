#include<bits/stdc++.h>
#include<queue>
using namespace std ;
int main() 
{
    queue<string> q ;
    q.push("love") ;
    q.push("babbar") ;
    q.push("Kumar") ;
    cout<<"First element "<<q.front()<<endl ;
    cout<<"Size before pop "<<q.size()<<endl ;
    q.pop() ;
    cout<<"Size after pop "<<q.size()<<endl ;
    cout<<"First element "<<q.front()<<endl ;
    cout<<"Empty or not "<<q.empty()<<endl ;
    
}
