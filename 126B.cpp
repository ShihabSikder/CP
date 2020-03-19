#include<bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    getline(cin,input);
    string ans="";
    long long int l = input.size();
    for(long long int i=1; i<l; i++)
    {
        string prefix = input.substr(0,i);
        string suffix = input.substr(l-i,i);
        if(prefix!=suffix)
            continue;
        int midmatch = input.find(prefix,1);
        if(midmatch==string::npos || midmatch>=(l-i))
            continue;
        ans = prefix;
    }
    if(ans.size()>0)
        cout<<ans<<endl;
    else
        cout<<"Just a legend"<<endl;
    return 0;
}
