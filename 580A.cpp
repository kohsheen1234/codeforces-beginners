#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ;i++)
    {
        cin>>arr[i];
    }
    int count =0;
    int max_count = INT_MIN;
    for(int i = 0 ; i < n-1 ;i++)
    {
        if(arr[i]>arr[i+1])
            {
                if(max_count<count)
                    max_count = count;
                count =0;
            }
        else
        {
            count++;
        }
    }
    if(max_count<count)
        max_count = count;
    cout<<max_count+1;

}

