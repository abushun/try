#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;

    vector<string> s(n);
    int rate = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        cin >> m;
        rate = rate + m;
    }

    sort(s.begin(), s.end());

    rate=rate%n;

    cout<<s[rate]<<endl;


    
    return 0;
}