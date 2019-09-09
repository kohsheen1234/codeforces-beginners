#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    map<char, int> mp;
    if(s.length()%2)
    {
        cout<<-1;
        return 0;
    }
    for(auto c : s)
    {
        mp[c]++;
    }
    int ans = (abs(mp['R'] - mp['L'])+ abs(mp['U'] - mp['D']))/2;
    cout<<ans;
    return 0;
}

