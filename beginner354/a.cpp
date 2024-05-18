#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;

    vector<int> h(n,0);
for (int i = 0; i < h.size(); i++)
{
    cin>>a;
    h[i]=a;
}

    for (int i = 1; i < h.size(); i++)
    {
        if(h[0]<h[i]){
            cout<<i+1<<endl;
            return 0;
        }
       
    }

    cout<<-1<<endl;
    
    return 0;
}