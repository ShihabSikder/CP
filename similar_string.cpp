#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>pattern;
    map<vector<int>,long long>pt;
    string text;
    long long patternText[50];

    long long result=0;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {

        cin>>text;
        int c=0;
        memset(patternText,0,sizeof(patternText));//vector clear korte hobe
        pattern.clear();
        int l = text.size();
        for(int j=0; j<l; j++)
        {
            if(patternText[text[j]-96])
            {
                pattern.push_back(patternText[text[j]-96]);
            }
            else
            {
                patternText[text[j]-96] = ++c;
                pattern.push_back(patternText[text[j]-96]);
            }
        }
        result+=pt[pattern]++;
    }
    cout<<result;
}
