#include<iostream>
#include <set>
#include <string>
//#include<bits/stdc++.h>
//#include<map.h>
using namespace std;



int main()
{
    string input;
    set<string>dics;

    while(cin>>input)
    {
        int l = input.size();

        string cur = "";
        for(int i=0; i<l; ++i)
        {
            char ch = tolower(input[i]);
            if(ch>='a' && ch<='z')
                cur += ch;
            else if(cur!="")
            {
                dics.insert(cur);
                cur="";
            }
        }
        if(cur!="")
            dics.insert(cur);
    }

    for(set<string>::iterator it = dics.begin(); it!=dics.end(); ++it)
    {
        cout<< *it<<endl;
    }
}
