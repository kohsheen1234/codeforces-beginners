#include <bits/stdc++.h>
#define size(a) int(a.size())

using namespace std;

typedef long long int ll;

int main()
{
    std::ios_base::sync_with_stdio(false);

    string s;
    cin >> s;

    int l = size(s);

    int dist = s[0] - 'a';

    ll ans = min(dist, 26 - dist);

    for (int i = 1; i < l; i++)
    {
        if (s[i] > s[i - 1])
            dist = s[i] - s[i - 1];
        else
            dist = s[i - 1] - s[i];

        ans += min(dist, 26 - dist);
    }

    cout << ans;

    return 0;
}