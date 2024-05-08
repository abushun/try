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
        // cout << i << endl;
        cin >> a >> b;
        if (data.find(b) != data.end())
        {
            int value = data.at(b);
            if (value > a)
            {
                data[b] = a;
            }
        }
        else
        { // not found
            count = 1;
            data[b] = a;
        }
    }

    max=-1;
    int num;
 for (auto iter = data.begin(); iter != data.end(); iter++) {
        // first: key, second: value
       
        num=(*iter).second;
        if(num>max){
            max=num;
        }
    }
    cout<<max<<endl;

    return 0;
}