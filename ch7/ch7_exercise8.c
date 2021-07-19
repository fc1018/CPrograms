//Program to solve quadratic equation

#include <stdio.h>
#include <stdbool.h>

//Array to store solutions
double solution[2] = {0};

//Function to determine whether discriminant is < 0
bool isImaginary(double a, double b, double c)
{
    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//Function to give absolute value of integer
double absoluteValue(double x)
{
    if (x < 0)
    {
        x = -x;
    }
    return (x);
}

//Function to compute the square root of a number
double squareRoot(double x)
{
    const double epsilon = 0.00001;
    double guess = 1.0;

    if (x < 0)
    {
        printf("Negative arguement to squarRoot.\n");
        return -1.0;
    }

    while (absoluteValue(((guess * guess) / x) - 1) >= epsilon)
    {
        guess = (x / guess + guess) / 2.0;
    }

    return guess;
}

//Function to calculate solution to a quadratic equation
void solveQuadratic(double a, double b, double c)
{
    solution[1] = (-b - squareRoot(b * b - 4 * a * c)) / (2 * a);
    solution[2] = (-b + squareRoot(b * b - 4 * a * c)) / (2 * a);
}

int main(void)
{
    double a, b, c;

    //Obtaining and assigning 'a','b','c' values to variables
    printf("Enter your 'a' 'b' 'c' values:\n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    //Checking to see whether solutions are imaginary numbers

    if (isImaginary(a, b, c))
    {
        printf("Error: Solutions are imaginary\n");
        return 0;
    }
    else
    {
        solveQuadratic(a, b, c);

        //Printing one solution if repeated and two if not
        if (solution[1] == solution[2])
        {
            printf("x = %lf (repeated solution)\n", solution[1]);
        }
        else
        {
            printf("x = %lf, %lf\n", solution[1], solution[2]);
        }

        return 0;
    }
}
