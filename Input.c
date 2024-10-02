/*
Program header 
1.Defines objective of the code
2.Revisions
3.Date & time of revesion
4.Author details
*/
// Header file inclusions
#include <stdio.h>
// Global Variable declaration

void main()
{
    int v1,v2;  //local declaration
    char k;
    float h;
    printf("enter the value of v1 : ");
    scanf("%d",&v1);
    printf("Value of v1 is : %d \n",v1);
    printf("enter the value of c : ");
    scanf("%s",&k);
    printf("Value of c is : %c \n",k);
    v2=k; // to get ASCII value of Character
    printf("ASCI value = %d \n",v2);
    printf("enter the value of f : ");
    scanf("%f",&h);
    printf("Value of f is : %.2f \n",h);
}
// Function header
// function implementation