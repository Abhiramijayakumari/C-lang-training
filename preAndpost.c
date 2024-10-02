#include <stdio.h>
void main()
{
    int v1 =10,v2,v3,res;
    // v2=v1++;  //post increment. v2=10,v1=11
    // printf("%d %d \n",v2,v1);
    // v3 = ++v2; //pre increment, v2=11 then v3=v2=11
    // printf("Value of v3 and v2 is :%d,%d",v3,v2);
    // printf("value of v1 is :%d,%d\n",v1,v1++);  //Associativity is from right to left
                                                //v1 = temp(print) then increment the next temp(print)
    // printf("value of v1 is %d,%d\n",v1,++v1);
    // printf("value of v1 is %d,%d,%d\n",++v1,v1,v1++);
    // printf("value of v1 is %d,%d\n",v1,--v1);
    // printf("value of v1 is %d,%d\n",v1,v1--);
    res = v1+v2-v3; //BODMAS
    printf("value of v1 is %d,%d,%d\n",--v1,++v1,v1--); // 9,9,10 is answer because the value of leftmost v1 is 10 and it is decremented to 9 and then there is pre increment and pre decrement then it will be cancelled each other so the answer of both v1 will be 9
    printf("value of v1 is %d,%d,%d\n",--v1,v1++,v1--);
}