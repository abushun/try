#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 2の60状までの配列を作成
    vector<long long> nin(60, 1);
    for (int i = 1; i < 60; i++)
    {
        nin[i] = nin[i - 1] * 2;
    }

    int a, b;
    long long C;
    cin >> a >> b >> C;
    int amari;

    deque<int> nisinsu;
    // cを二進数に分解
    while (1 < C)
    {
        amari = C % 2;

        nisinsu.push_front(amari);
        C = C / 2;
    }
    nisinsu.push_front(C);

    // 1の数を数える
    int num = 0;
    for (int i = 0; i < nisinsu.size(); i++)
    {
        if (nisinsu[i] == 1)
            num++;
    }

    for (int i = 0; i < nisinsu.size(); i++)
    {
        cout << nisinsu[i];
    }
    cout << endl;
    cout << num << endl;

    // 排他的論理和に加えて1の数がa=b出会ったら再現可能
    bool hantei = false;
    int keisan1 = 0, keisan2;
    for (int i = 0; i < num + 1; i++)
    {
        keisan1 = a - i;
        keisan2 = b - (num - i);

        if ((keisan1 == keisan2) && (keisan1 >= 0))
        {
            hantei = true;
            break;
        }
    }

    //********************************************************************************判定までは合ってる**************************************************************
    // cout<<keisan1<<endl;
    // 再現
    if (hantei)
    {
        deque<int> ans1;
        deque<int> ans2;
        int rep = num + keisan1;
        int i = 0;
        while (!((a == keisan2) & (b == keisan2) && (keisan1 == 0)))
        {

            if (nisinsu[i] == 1)
            {

                if (a > keisan2)
                {
                    a--;
                    ans1.push_back(1);
                    ans2.push_back(0);
                }
                else if (b > keisan2)
                {
                    b--;
                    ans1.push_back(0);
                    ans2.push_back(1);
                }
            }
            else
            {
                if (keisan1 > 0)
                {
                    keisan1--;
                    ans1.push_back(1);
                    ans2.push_back(1);
                }
                else
                {
                    ans1.push_back(0);
                    ans2.push_back(0);
                }
            }

            i++;
        }
        long long a2 = 0, b2 = 0;

        for (int i = 0; i < ans1.size(); i++)
        {
            cout << ans1[i];
        }
        cout << endl;

        for (int i = 0; i < ans2.size(); i++)
        {
            cout << ans2[i];
        }
        cout << endl;

        for (int i = 0; i < ans1.size(); i++)
        {
            a2 = a2 + (ans1[i] * nin[i]);
        }

        for (int i = 0; i < ans2.size(); i++)
        {
            b2 = b2 + (ans2[i] * nin[i]);
        }

        cout << a2 << ' ' << b2 << endl;
    }

    else
        cout << -1 << endl;

    // cout<<ans<<endl;
    // 総和以下だったら再現不可能で-1を算出
    return 0;
}