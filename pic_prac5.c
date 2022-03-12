#include<stdio.h>
#include<conio.h>
int main ()
{
    char name1[20],name2[20];
    printf("\nThis program asks first and surname name of person and prints full name\n");
    printf("\nEnter first name : ");
    scanf("%s",&name1);
    printf("Enter surname name : ");
    scanf("%s",&name2);
    printf("\nThe entered name is : %s %s",&name1,&name2);
    return 0;
}
