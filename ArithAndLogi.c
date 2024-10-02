#include <stdio.h>
void main()
{
    int condition,v1=10,v2=20,v3=5,res=0;
    printf("Enter the condition variable : ");
    scanf("%d",&condition);
    if(condition==0)
    {
        res = v1+(v2-v3);
    }
    else if(condition==1)
    {
        res = v1+v2-v3;
    }
    printf("value of res = %d",res);
}