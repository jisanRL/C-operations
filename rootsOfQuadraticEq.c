#include <stdio.h>
#include <math.h>

/*
 b^2-4ac is known as the discriminant of a quadratic equation
 If discriminant is greater than 0, the roots are real and different.
 If discriminant is equal to 0, the roots are real and equal.
 If discriminant is less than 0, the roots are complex and different.
 */

int main()
{
    double a, b, c;         //coefficients
    double discriminant;
    double root1, root2;    //the roots
    double realPart, imaginaryPart;
    
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf",&a, &b, &c);
    
    discriminant = b*b-4*a*c;               //ie, b^2 - 4*ac
    
    // condition for real and different roots
    if (discriminant > 0)
    {
        // sqrt() function returns square root
        root1 = (-b+sqrt(discriminant))/(2*a);
        root2 = (-b-sqrt(discriminant))/(2*a);
        
        printf("root1 = %.2lf and root2 = %.2lf",root1 , root2);
    }
    
    //condition for real and equal roots
    else if (discriminant == 0)
    {
        root1 = root2 = -b/(2*a);
        
        printf("root1 = root2 = %.2lf;", root1);
    }
    
    // if roots are not real
    else
    {
        realPart = -b/(2*a);
        imaginaryPart = sqrt(-discriminant)/(2*a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imaginaryPart, realPart, imaginaryPart);
    }
    
    return 0;
}



