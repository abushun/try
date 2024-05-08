#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    vector<int> angou_ato;
    int sum = 0;
    for (int i = 0; i < t.length(); i++)
    {
        angou_ato.push_back(t[i] - 'A');
        sum = sum + (t[i] - 'A');
    }

    int count = 0;
    int ans_count = 0;

    while (count != s.length())
    {

        if (s[count] - 'a' == angou_ato[ans_count])
        {
            ans_count++;
            sum = sum - (s[count] - 'a');
            if ((ans_count == 3))
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
        count++;
    }

    if ((sum == 23)&&(ans_count==2))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}