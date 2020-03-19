#include<stdio.h>
#include<string.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    char str[100];
    for(int i =0;i<n;i++){
        scanf("%s",str);
        if(strcmp(str,"Tetrahedron")==0)
            count+=4;
        else if(strcmp(str,"Cube")==0)
            count+=6;
        else if(strcmp(str,"Octahedron")==0)
            count+=8;
       else if(strcmp(str,"Dodecahedron")==0)
            count+=12;
       else if(strcmp(str,"Icosahedron")==0)
            count+=20;

    }
    printf("%d",count);
}
