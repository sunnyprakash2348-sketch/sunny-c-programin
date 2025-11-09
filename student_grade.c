// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int mark;
    printf("enter your marks:");
    scanf("%d",&mark);
    if (mark<=100)
    {
        int grade=mark/10;
        switch(grade)
        {
            case 9:
            printf("obtain grade:A+");
            break;
            case 8:
            printf("obtain grade:A");
            break;
            case 7:
            printf("obtain grade:B");
            break;
            case 6:
            printf("obtain grade:C");
            break;
            default:
            printf("obtain grade:F");
            break;
        }
        
    }
    else
    {
        printf("Enter below and equal to 100 marks");
    }
    
}
