#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int run, over;
        cin >> run >> over;

        if ((over * 6) * 6 >= run)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }
    return 0;
}