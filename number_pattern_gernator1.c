#include<stdio.h>
int main()
{
    int x,k,y;
    printf("Enter your number for making pattern:");
    scanf("%d",&k);
    for(x=1;x<=k;x++){
        for(y=1;y<=x;y++){
            printf("%d",y);
        }
    printf("\n");   
    }
}