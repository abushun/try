#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int count = 1;
    int seat = k;
    for (int i = 0; i < a.size(); i++)
    {
        if (seat < a[i])
        {
            count = count + 1;
            seat = k - a[i];
        }
        else
        {
            seat = seat - a[i];
        }
    }

    cout << count << endl;

    return 0;
}