#include <bits/stdc++.h>
using namespace std;

int main()
{
    //***********************************insert data****************************************************
    int h,w,n;
    cin>>h>>w;
    char c;
    int start_x,start_y;
    vector<vector<char>>a(h,vector<char>(w));
    for (int i = 0; i < h; i++)
    for (int j = 0; j < w; j++)
    {
        cin>>c;
        a[i][j]=c;
        if(c=='S'){
            start_y=i;
            start_x=j;
        }
    }
    cin>>n;
    vector<tuple<int,int,int>>e(n);
    int x,y,kaihuku;
    for (int i = 0; i < n; i++)
    {
        cin>>x>>y>>kaihuku;
        get<0>(e[i])=x;
        get<1>(e[i])=y;
        get<2>(e[i])=kaihuku;
    }

    //*******************************************************************************************************
    

    
    return 0;
}