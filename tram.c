#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int num[n][2],p[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d %d",&num[i][0],&num[i][1]);
    }
    int t = num[0][1];
    p[0] = t;
    for(int i=1; i<n; i++)
    {
        t = t - num[i][0]+num[i][1];
        p[i] = t ;
    }

    for(int i=0; i<n; i++)
    {
        int temp =0;
        for(int j=i+1; j<n; j++)
        {
            if( p[i]<p[j])
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    printf("%d",p[0]);

}
