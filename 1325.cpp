#include<bits/stdc++.h>
#include<algorithm>
//SURE TLE

using namespace std;
int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main()
{
    int t,flag=0;
    cin>>t;
    while(t--){
    int x;
    cin>>x;
    for(int i=1; i<=x/2; i++)
    {
        for(int j=1; j<=x/2; j++)
        {
            int GCD = gcd(i,j);
            int LCM = (i*j)/GCD;
            if((GCD+LCM)==x){
                cout<<i<<" "<<j<<endl;
                flag =1;break;
            }
        }
        if(flag==1)break;
    }
    }
}

