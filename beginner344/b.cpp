#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, n;
    cin >> n;
    vector<pair<int, int>> data;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        data.push_back({a, b});
    }
    int dist,max,max_in=1;
    for (int i = 0; i < n; i++)
    {
        max=0;
        
        for (int j = 0; j<n; j++)
        {
            dist=(data[i].first-data[j].first)*(data[i].first-data[j].first)+(data[i].second-data[j].second)*(data[i].second-data[j].second);
            if(dist>max){
                max=dist;
                max_in=j+1;
            }
        }
        cout<<max_in<<endl;
    }

    return 0;
}