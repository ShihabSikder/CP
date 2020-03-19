#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,q;
    char option;
    cin>>t;
    long long x,y,z;
    for(int i=0; i<t; i++)
    {

        cin>>n>>q;
        long long  number[n];
        for(int j=0; j<n; j++)
            cin>>number[j];

        for(int k=0; k<q; k++)
        {
            cin>>option;
            switch(option)
            {
            case 'S':
                cin>>x;
                for(int l=0; l<n; l++)
                    number[l]+=x;
                break;
            case 'M':
                cin>>x;
                for(int l=0; l<n; l++)
                    number[l]*=x;
                break;
            case 'D':
                cin>>x;
                for(int l=0; l<n; l++)
                    number[l]/=x;
                break;
            case 'P':
                cin>>x>>y;
                swap(number[x],number[y]);
                break;
            case 'R':
                int s = sizeof(number)/sizeof(number[0]);
                reverse(number,number+s);
                break;
            }

        }


        cout<<"Case "<<i+1<<":"<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<number[i];
            if(i!=n-1)
                cout<<" ";
            else
                cout<<endl;
        }

    }
}
