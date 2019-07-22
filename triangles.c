#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Enter the base of the triangle\n");            //input of triangle sides
    scanf("%d", &a);
    do                                                    //do while loop to make sure a right angled triangle is not mistaken for a scalene
    {
        printf("Enter the other two sides of the triangle,starting with the smallest side\n");
        printf("side 1\n");
        scanf("%d", &b);
        printf("side 2\n");
        scanf("%d", &c); 
        if ( b > c)
        {
            printf("Please check your input.\nYou input %d first which is greater that %d\nPlease start with the smaller side.\n", b, c);
        }
    } 
    while(b > c);
    
    
    if ((c * c) == ((a * a) + (b * b)))                    //check if triangle is right angled
    {
        printf("Triangle of base %d, height %d and hypotenuse %d is a right angled triangle\n", a, b, c);
    }
    else if (((a + b + c) % (a + a + a)) == 0)            //check if triangle is equilateral
    {
        printf("Triangle of base %d, height %d and hypotenuse %d is an equilateral triangle\n", a, b, c);
    }
    else if (((a + b + c) % (a + a + a)) != 0)            //check if triangle is isosceles
    {
        printf("Triangle of base %d, height %d and hypotenuse %d is an isosceles triangle\n", a, b, c);
    }
    else                                                  //if neither of the above, triangle is definately scalene
    {
        printf("Triangle of base %d, height %d and hypotenuse %d is a scalene triangle\n", a, b, c);
    }
}
