/* PROGRAM HEADER
    1. Objective : To evaluate quadratic equation. Capture coefficients from user.
    2. Date & Time : 02/10/2024 , 10.00
    3. Abhirami J
*/
#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d,root1,root2,real,imaginary;
    printf("Enter the coefficient a : ");
    scanf("%d",&a);
    printf("Enter the coefficient b : ");
    scanf("%d",&b);
    printf("Enter the coefficient c : ");
    scanf("%d",&c);

    if(a==0)  // Checks the given eqaution is quadratic or not
    {
        printf("Please enter a quadratic eqaution!!!");
        return 1;
    }
    d = (b*b)-(4*a*c);  // Calculates the discriminant d
    if(d>0) // Real and disctint roots
    {
        root1 = (-b+sqrt(d))/(2*a);
        root2 = (-b-sqrt(d))/(2*a);
        printf("The square roots are %d and %d",root1,root2);
    }
    else if(d==0) // One real root
    {
        root1 = (-b)/(2*a);
        printf("The root is %d",root1);
    }
    else  //Complex roots
    {
        real = -b / (2 * a);
        imaginary = sqrt(-d) / (2 * a);
        printf("The Equation has Complex roots: %d + %di and %d - %di", real, imaginary, real, imaginary);
    }
    return 0;
}