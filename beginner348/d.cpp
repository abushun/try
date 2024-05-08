#include <bits/stdc++.h>
using namespace std;

int main()
{
string s;
cin>>s;
vector<int>english(26,0);
for (int i = 0; i < s.length(); i++)
{
    english[s[i]-'a']++;
}
bool hantei=true;




vector<int>ans(101,0);
for (int i = 0; i < english.size(); i++)
{
    ans[english[i]]++;
}

for (int i = 1; i < ans.size(); i++)
{
    if((ans[i]!=2)&&(ans[i]!=0))
    hantei=false;
}

if(hantei)
cout<<"Yes"<<endl;
else 
cout<<"No"<<endl;

    return 0;
}