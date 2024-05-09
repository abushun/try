#include <bits/stdc++.h>
using namespace std;

int main()
{
long long L,R;
cin>>L>>R;
vector<int>nizyou(61,1);
for (int i = 1; i < nizyou.size(); i++)
{
    nizyou[i]=nizyou[i-1]*2;
}



    return 0;
}