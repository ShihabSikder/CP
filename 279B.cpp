#include<bits/stdc++.h>
//using two pointer, max n consecutive sum
using namespace std;

int main()
{
    int a,t,ans=0,sum=0,rp=0,lp=0,mx=0;
    cin>>a>>t;
    int book[a];
    for(int i=0; i<a; i++)
        cin>>book[i];

    for(rp=0; rp<a; rp++)
    {
        sum+=book[rp];
        while(sum>t)
        {
            sum-=book[lp];
            lp++;
        }
        ans = max(ans,rp-lp+1);
    }
    cout<<ans<<endl;
}
