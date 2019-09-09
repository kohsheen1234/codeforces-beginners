#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long s1, s2, free;
        cin >> s1 >> s2 >> free;
        //    int count =0;
        //   s1 = s1+ free;
        long long ans;
        if (s1 + free <= s2)
        {
            //   cout<<s1-s2;
            cout << 0 << endl;
            continue;
        }
        int start = 0, end = free, mid;

        while (start < end)

        {
            mid = (start + end) / 2;
            if (s1 + mid > s2 + (free - mid))
            {
                end = mid;
            }
            else
            {
                start = mid + 1;
            }
        }
        cout << free - start + 1 << endl;
    }
}