#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int sum=0;
    for (int i = 0; i < n-1; i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }

    if(sum==0){
    cout<<0<<endl;
    return 0;
    }
    if(sum>0)
    cout<<'-';

    cout<<abs(sum)<<endl;

    


    return 0;
}