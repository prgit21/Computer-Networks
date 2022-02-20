#include<stdio.h>
#include<stdlib.h>
int main(){
int f,w,i,frames[100];
printf("emter window size");
scanf("%d",&w);

printf("enter number of frames to be sent");
scanf("%d",&f);

printf("Windows sent in this order wiht no corruption \n\n");
printf("send %d at a time",&w);
printf("enter frames to be sent ");
for (i=0;i<f;i++){
    scanf("%d",frames[i]);

}

for (i=0;i<f;i++){
    if(i%w==0){
        printf("%d",frames[i]);
        printf("ack of above is recieved");
    }
    else{
        print("%d",frames[i]);
    }

if(f%w!=0){
    printf("ack rec by send")
}
}