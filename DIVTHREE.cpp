#include <iostream>
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    int t, n;
    long long k, d, max_days;
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> d;
        long long a[n], s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s += a[i];
        }

        max_days = s / k;

        if (s < k)
            cout << "0"<< endl;
        else if (max_days > d)
            cout << d << endl;
        else
            cout << max_days << endl;
    }

    return 0;
}
