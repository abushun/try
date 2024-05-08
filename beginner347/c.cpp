#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n, a, b;
    cin >> n >> a >> b;


    set<int> ans;
    int d;
    for (int i = 0; i < n; i++)
    {
        cin >> d;
        ans.insert(d % (a + b));
    }
    int keisan;
    int bk, fr;
    bool hantei = false;

    vector<int>ans2(ans.begin(),ans.end());

    for (int i=1;i<ans2.size();i++)
    {
        fr = ans2[i];
        bk = ans2[i-1];
        keisan = abs(fr - bk);
        if (keisan - 1 >= b)
            hantei = true;
    }
    keisan = ans2[0] + (a + b) -ans2[ans2.size()-1];

    if (keisan - 1 >= b)
        hantei = true;
    if (hantei)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}