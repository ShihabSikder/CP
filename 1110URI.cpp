#include<iostream>
#include <deque>
#include <string>
#include<stdio.h>
//#include<bits/stdc++.h>
//#include<map.h>

using namespace std;

int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        deque<int>card;
        for(int i=1; i<=n; i++)
            card.push_back(i);

        printf("Discarded cards: ");
        //cout<<"debug 1 banan"
        while(card.size()>1)
        {
            if(card.size()!=2)
                printf("%d, ",card.front());
            //baler koma
            else
                printf("%d\n",card.front());

            card.pop_front();
            card.push_back(card.front());
            card.pop_front();
        }
        printf("Remaining card: %d\n",card.front());
    }
    return 0;
}
