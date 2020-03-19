#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j=1; j<=t; j++)
    {
        int n,temp;
        cin>>n;
        int nim[n+10];
        int result = 0;
        int sp=0;
        for(int i=1; i<=n; i++)
            cin>>nim[i];
        for(int i=1; i<=n; i++)
        {
            if(nim[i]==1)
                sp=1;
            else
            {
                sp=0;
                break;
            }
        }
        for(int i=1; i<=n; i++)
        {
            result^=nim[i];
        }
        if(sp==1 && (n%2==0) )
            cout<<"Case "<<j<<": "<<"Alice"<<endl;
        else if(sp==1 && (n%2!=0) )
            cout<<"Case "<<j<<": "<<"Bob"<<endl;
        else if(result)
            cout<<"Case "<<j<<": "<<"Alice"<<endl;
        else
            cout<<"Case "<<j<<": "<<"Bob"<<endl;
    }
}
