#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n, 0);
    vector<int> c(n, 0);
    vector<pair<int, int>> card;
    vector<pair<int, int>> index;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> c[i];
        card.push_back({c[i], a[i]});
        index.push_back({c[i], i + 1});
    }

    sort(card.begin(), card.end());
    sort(index.begin(), index.end());

    int max = card[0].second;
    for (int i = 0; i < n; i++)
    {

        if (max > card[i].second)
        {
        }

        else
        {
            ans.push_back(index[i].second);
            max = card[i].second;
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for (auto &&i : ans)
        cout << i << ' ';
    cout << endl;

    return 0;
}