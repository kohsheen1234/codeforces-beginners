#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
   int n,m;
   cin>>n>>m;
   int x1,x2,x3;
   x1=x2=x3 = m;
   int count =0;
   while(1)
   {
       if(x2+x3>n)
       {
           count+=3;
           break;
       }
       count++;
       x1 = x2+x3-1;
        if(x1+x3>n)
       {
           count+=3;
           break;
       }
       count++;
       x2 = x1+x3-1;
        if(x2+x1>n)
       {
           count+=3;
           break;
       }
       count++;
       x3 = x2+x1-1;
   }
   cout<<count;

    
}

