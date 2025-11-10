// Online C compiler to run C program online
#include <stdio.h>

int main(){
    int x,y;
    printf("Enter table number:");
    scanf("%d",&x);
    for(y=1;y<=10;y++)
    {
        printf("%dx%d=%d\n",x,y,y*x);
    }
}