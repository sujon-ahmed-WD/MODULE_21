#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>>q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<q.top()<<endl;
   

    
    return 0;
}