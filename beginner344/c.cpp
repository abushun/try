#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n;
    map<int, int> data;
    int max = -1, count = 0;
    int value;

    for (int i = 0; i < n; i++)
    {
        cout<<i<<endl;
        cin >> a >> b;
        if (data.find(b) != data.end())
        {
            int value = data.at(b);
            if (value > a)
            {
                data[b] = a;
                count = 1;
            }
            else
            {
                count = 0;
                continue;
            }
        }
        else
        { // not found
            count = 1;
            data[b] = a;
        }

        if (count == 1)
        {
            if (a > max)
            {
                max = a;
                cout<<max<<endl;
            }
        }
    }
    
    bool found = false;

    for_each(data.begin(), data.end(),
             [&max, &found](const std::pair<char, int> &p)
             {
                 if (p.second == max)
                 {
                     cout << p.first << endl;
                     found = true;
                 }
             });

    return 0;
}