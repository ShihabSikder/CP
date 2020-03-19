#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){

int i,temp,counter;
int howmany;
printf("How many Numbers you want to compare?\n");
scanf("%d",&howmany);
int numbers[howmany];

for(i=0;i<howmany;i++){
    numbers[i]= rand();
    }
printf("\n The original numbers \n\n");
for(i=0;i<howmany;i++){
    printf(" %d\n",numbers[i]);
    }


    while(1){
        counter=0;
    for(i=0;i<howmany-1;i++){

     if(numbers[i]<numbers[i+1]){
        temp= numbers[i];
        numbers[i]= numbers[i+1];
        numbers[i+1]= temp;
        counter=1;
        }

    }
       if(counter==0){
        break;
       }
    }


printf("\n\n\n\n The sorted numbers \n\n");
for(i=0;i<howmany;i++){
    printf("%d \n",numbers[i]);
    }

return 0;
}
