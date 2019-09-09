#include <iostream>
using namespace std;
int main() {
    int n,t;
    cin>>n>>t;
    int arr[n];
    arr[0] = 0;
    for(int i = 1;i<n;i++)
    {
        cin>>arr[i];
    }
    int j =1;
    int flag =0;
    while(j<=t)
    {
        if(j==t)
        {
            flag =1;
            break;
        }
        j = arr[j] +j;
    }
    if(flag ==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}

