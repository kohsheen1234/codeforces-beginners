#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int  ans  = 0;
    while(m>n)
    {
        if(m%2==0)
            m = m/2;
        else
            m++;
        ans++;
    }
    if(n>m)
        ans += n-m;
    cout<<ans;
}

