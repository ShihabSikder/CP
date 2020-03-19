#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<pair<int,int>>num,mx;
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int t,v;
        pair<int,int>a,b;
        cin>>t;
        switch(t)
        {
        case 1:
            cin>>v;
            num.push(make_pair(v,i));
            if(mx.size()==0){
                mx.push(make_pair(v,i));
            }else{
                a = mx.top();
                if(a.first<v){
                    mx.push(make_pair(v,i));
                }
            }
            break;
        case 2:
            a = num.top();
            b = mx.top();
            num.pop();
            if(a.first==b.first && a.second==b.second){
                mx.pop();
            }
            break;
        case 3:
            a = mx.top();
            cout<<a.first<<endl;
        }i++;
    }
}
