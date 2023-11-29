#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, q;
        cin >> n >> q;

        vector<long long> a(n), pref(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            pref[i + 1] = pref[i] + a[i];
        }

        for (int i = 0; i < q; i++)
        {
            long long l, r, k;
            cin >> l >> r >> k;
            long long ans = pref[n] - (pref[r] - pref[l - 1]) + k * (r - l + 1);
            if (ans % 2 == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
