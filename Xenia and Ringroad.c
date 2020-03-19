#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int now = 0;
    int loc = 1;
    long long int ans = 0;

    //int num[m];
    for(int i=0; i<m; i++)
    {
        scanf("%d",&now);

        if(now >= loc)
            ans += now - loc;
        else
            ans += n - (loc - now);
        loc = now;


    }

printf("%lld",ans);

}
