#include <stdio.h>

int main(){
    int x,y,k;
    printf("Enter pattern number:");
    scanf("%d",&x);
    y=1;
    while(y<=x)
    {
        k=1;
        while(k<=y){
            printf("%d",k);
            k++;
        }
        y++;
        printf("\n");
    }
}