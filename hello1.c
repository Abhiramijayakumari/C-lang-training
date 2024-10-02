#include <stdio.h>
int v2=20;//global declaration
void fun();  //prototyping
void main()
{
    int v1=10;//local declaration
    unsigned int val=10;
    char c;             //size=1 byte = 8bits, range = -128 to +127
    unsigned char uc;   //size=1byte = 8 bits, range = 0 to 255
    // printf("Size of int is : %d bytes \n",sizeof(int));
    // printf("Size of short int is : %d bytes \n",sizeof(short int));
    // printf("Size of double is : %d bytes \n",sizeof(double));
    // printf("Size of char is : %d bytes \n",sizeof(char)); //max value = (2 pow n)-1, n=bits
    // printf("Size of Float is : %d bytes \n",sizeof(float));//max value =(2 pow n*8)-1, n=bytes
    // printf("value of int variable val is %d \n",val);
    printf("Value of v2 is : %d \n",v1);
    // printf("Adrres of v1 in main function is: %X \n",&v1);
    // printf("Addres of val is :%u \n",&val);
    // printf("Addres of val is :%x \n",&val);
    // printf("Addres of val is :%X \n",&val);
    // printf("Addres of c is :%X \n",&c);
    // printf("Addres of uc is :%X \n",&uc);
    fun();
    fun();

}
void fun()
{
    static int v1 =25;
    v1 = v1+1;
    printf("Value of v2 is : %d \n",v1);
    // printf("Adrres of v1 in fun function is: %X \n",&v1);

}