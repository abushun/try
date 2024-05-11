#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    long long sum = 0, t = 100000000;
    cin >> n;

    vector<long long> a(n, 0);

    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
        sum = sum + a[i] * (n - 1);
    }

    sort(a.begin(), a.end());

    long long count = 0;
    long long search, left, right, middle;
    // 二分探索法
    for (int i = 0; i < a.size()-1; i++)
    {
        search = t - a[i];
        left = i;
        right = a.size() ;
        
        while (left + 1 < right)
        {
            middle = (right + left) / 2;
            if (a[middle] >= search)
            {
                right = middle;
            }
            else
            {
                left = middle;
            }
        }
        count = count + (n - right);
        
        
    }

    sum=sum-t*count;
    
    cout << sum<< endl;

    return 0;
}