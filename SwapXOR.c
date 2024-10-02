#include <stdio.h>

void main()
{
    int v1=10,v2=20; //v1=1010 , v2=1100
    v1 = v1^v2; 
    v1 = v1^v2; 
    v2 = v1^v2; 
    printf("v1 and v2 is %d,%d",v1,v2);
}