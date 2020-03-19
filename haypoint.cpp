#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int x,n,m,total=0;
    cin>>m>>n;
    string dummy,temp;
    map<string,int>money;
    while(m--)
    {
        cin>>dummy>>x;
        money[dummy]=x;
    }
    while(n--)
    {
        total=0; //ekhane vul
        while(1)
        {
            cin>>temp;
            if(temp==".")
                break;
            total += money[temp];
        }
        cout<<total<<endl;
    }
}
