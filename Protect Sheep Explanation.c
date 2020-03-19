#include<stdio.h>

int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    char grid[r+5][c+5];
    for(int i=1;i<=r;i++)
        {
            scanf("%s",&grid[i]);
        }

    int possible = 1;

    for(int i =1;i<=r;i++){
        for(int j=1;j<=c;j++){
                if(grid[i][j]=='S' && (grid[i][j-1]=='W' || grid[i][j+1]=='W'|| grid[i-1][j]=='W'||grid[i+1][j]=='W')){
                    printf("No\n");
                    return 0;
            }

            if(grid[i][j]=='S')
                {
                if(grid[i][j-1]=='.')
                    grid[i][j-1]='D';
                if(grid[i][j+1]=='.')
                    grid[i][j+1]='D';
                if(grid[i-1][j]=='.')
                    grid[i-1][j]='D';
                if(grid[i+1][j]=='.')
                    grid[i+1][j]='D';
            }
        }
    }
    printf("Yes\n");
    for(int i=1;i<=r;i++){

        for(int j=1;j<=c;j++){
            printf("%c",grid[i][j]);
        }
        printf("\n");
    }
}
