#include<bits/stdc++.h>
using namespace std;

int main()
{
    int temp,t,n,s;
    string x;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        cin>>s;
        cin>>n;

        deque<int>a;
        cout<<"Case "<<i<<":"<<endl;
        for(int j=0; j<n; j++)
        {
            cin>>x;
            if(x=="pushLeft"||x=="pushRight")
            {
                cin>>temp;
                if(a.size()==s)
                {
                    cout<<"The queue is full"<<endl;
                }
                else
                {
                    if(x=="pushLeft")
                    {
                        cout<<"Pushed in left: "<<temp<<endl;
                        a.push_front(temp);
                    }
                    if(x=="pushRight")
                    {
                        cout<<"Pushed in Right: "<<temp<<endl;
                        a.push_back(temp);
                    }
                }
            }

            if(x=="popLeft" || x=="popRight"){
                if(a.size()==0){
                    cout<<"The queue is empty"<<endl;
                }
                else{
                    if(x=="popLeft"){
                        cout<<"Popped from left: "<<a.front()<<endl;
                        a.pop_front();
                    }
                    if(x=="popRight"){
                        cout<<"Popped from Right: "<<a.back()<<endl;
                        a.pop_back();
                    }
                }
            }

        }
    }
}
