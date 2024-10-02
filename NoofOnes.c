/* PROGRAM HEADER
    1. Objective : To find the number of 1’s in the binary equivalent of a given number.
    2. Date & Time : 02/10/2024 , 9:30
    3. Authors Name : Abhirami J
*/
#include<stdio.h>

int count(int num); //Prototyping
void main()
{
    int num;
    printf("enter the number : ");
    scanf("%d",&num);
    count(num);  // Calling the count function
}
int count(int num)
{
    int bit,count=0,temp;
    temp = num;
    while(num>0)
    {
        bit = num&1;   // To get the least significant bit.
        count += bit;  // Add the least significant bit to count.
        num >>= 1;     // Shift the bits of num one position to the right.
    }
    printf("The number of 1s in %d is %d\n",temp,count);
}