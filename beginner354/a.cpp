#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    int h;
    cin >> h;
    int tall;
    int count = 1;
    for (int i = 1; i < 50; i++)
    {
        if (i == 1)
            tall = 1;
        else
        {
            count = count * 2;
            tall = tall+count;;
        }
        // cout<<tall<<endl;
        if (h < tall)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}