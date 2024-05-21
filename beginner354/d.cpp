#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>>area(2,vector<int>(4,0));

    area[0][0]=2;
    area[0][1]=1;
    area[0][2]=0;
    area[0][3]=1;
    area[1][0]=1;
    area[0][1]=2;
    area[0][2]=1;
    area[0][3]=0;

    int a,b,c,d;
    cin>>a>>b>>c>>d;
     int x_sabun=c-a;
     int y_sabun=d-b;
     int x_start,y_start;
     
     x_start=a%4;
     if(x_start<0)
     x_start=x_start+4;

    y_start=d%2;
     if(y_start<0)
     y_start=y_start+2;

     int x_amari=x_sabun%4;
     int x_syo=x_sabun/4;

     int y_amari=y_sabun%2;
     int y_syo=y_sabun/2;
    
    long long ans=0;

    ans=ans+(x_syo*8*y_syo);

    if(y_amari!=0&&y_sabun>4){
        int count=0;
        while(count!=x_sabun){
            int k=(x_start+count)%4;
            ans=ans+area[y_start][k];
            count++;
        }
    }
int cal[2];
cal[0]=0;
cal[1]=0;
if(x_amari!=0){
    for (int i = 0; i < x_amari; i++)
    {
        int k=(x_start+i)%4;
        cal[0]=cal[0]+area[0][k];
        cal[1]=cal[1]+area[1][k];
    }
    
}
ans=ans+((cal[0]+cal[1])*y_syo);

cout<<ans<<endl;

return 0;

    




}