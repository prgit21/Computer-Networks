#include<stdio.h>
#define MIN(x,y) (x>y)?y:x


int main(){
    int orate,nsec,drop,count,cap,x,i=0,inp[i]={0},ch;

    printf("Enter bucket size");
    scanf("%d",&cap);

    printf("enter orate");
    scanf("%d",&orate);

    do{
        printf("enter at what sec");
        scanf("%d",&inp[i]);
        i++;

        printf("Enter 0 to quit 1 to continue");
        scanf("%d",&ch);
    }while (ch);

nsec=i;
printf("Second \t recieved \t sent \t dropped \t remained");
x=inp[i]+count-orate;
for(i=0; count || i< nsec;i++){
    printf("%d",i+1);
    printf("%d",inp[i]);
    printf("%d",MIN((inp[i]+count),orate);

    if(x>0){

        count=cap;
        drop=x-cap;
    }
    else{
        count=x;
        drop=0;
    }}
    else
    {
        count=drop=0;
    }
    
}
    
    
    
    
