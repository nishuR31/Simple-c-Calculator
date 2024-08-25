#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, res; // Use double for all calculations to handle floating-point operations
    char operator;    // Variable to store the operator entered by the user
    int start;        // Variable to decide whether to continue or exit the loop

    while (1) {       // Infinite loop to keep the calculator running until the user decides to stop
        printf("\nInput your 1st number: ");
        scanf("%lf", &a); // Read the first number from user input

        printf("Input your 2nd number (if needed; otherwise enter 0): ");
        scanf("%lf", &b); // Read the second number from user input (or 0 if not needed)

        printf("Enter your operator (+, -, *, %%, /, ^, e (exp), s (sqrt), c (cos), t (tan), i (sin), A (asin), C (acos), T (atan), L (log), l (log10)): ");
        scanf(" %c", &operator); // Read the operator from user input, note the space to consume any newline character

        switch (operator) {  // Use switch-case to handle different operations
            case '+':
                res = a + b; // Addition
                printf("\nSum of %.2lf + %.2lf = %.2lf\n", a, b, res);
                break;

            case '-':
                res = a - b; // Subtraction
                printf("\nSubtraction of %.2lf - %.2lf = %.2lf\n", a, b, res);
                break;

            case '*':
                res = a * b; // Multiplication
                printf("\nProduct of %.2lf * %.2lf = %.2lf\n", a, b, res);
                break;

            case '%':
                if (b == 0) {
                    printf("\nError: Division by 0 is not possible.\n"); // Handle division by zero
                } else {
                    res = fmod(a, b); // Modulus for floating-point numbers
                    printf("\nRemainder of %.2lf %% %.2lf = %.2lf\n", a, b, res);
                }
                break;

            case '/':
                if (b == 0) {
                    printf("\nError: Division by 0 is not possible.\n"); // Handle division by zero
                } else {
                    res = a / b; // Division
                    printf("\nDivision of %.2lf / %.2lf = %.2lf\n", a, b, res);
                }
                break;

            case '^':
                res = pow(a, b); // Exponentiation
                printf("\nPower of %.2lf ^ %.2lf = %.2lf\n", a, b, res);
                break;

            case 'e':
                res = exp(a); // Exponential function e^x
                printf("\nExponential of %.2lf = %.2lf\n", a, res);
                break;

            case 's':
                if (a < 0) {
                    printf("\nError: Square root requires a non-negative number.\n"); // Handle negative input for square root
                } else {
                    res = sqrt(a); // Square root
                    printf("\nSquare root of %.2lf = %.2lf\n", a, res);
                }
                break;

            case 'c':
                res = cos(a); // Cosine (angle in radians)
                printf("\nCosine of %.2lf (in radians) = %.2lf\n", a, res);
                break;

            case 't':
                res = tan(a); // Tangent (angle in radians)
                printf("\nTangent of %.2lf (in radians) = %.2lf\n", a, res);
                break;

            case 'i':
                res = sin(a); // Sine (angle in radians)
                printf("\nSine of %.2lf (in radians) = %.2lf\n", a, res);
                break;

            case 'A':
                if (a < -1 || a > 1) {
                    printf("\nError: Input for asin must be between -1 and 1.\n"); // Handle invalid input for arcsine
                } else {
                    res = asin(a); // Arcsine
                    printf("\nArcsine of %.2lf (in radians) = %.2lf\n", a, res);
                }
                break;

            case 'C':
                if (a < -1 || a > 1) {
                    printf("\nError: Input for acos must be between -1 and 1.\n"); // Handle invalid input for arccosine
                } else {
                    res = acos(a); // Arccosine
                    printf("\nArccosine of %.2lf (in radians) = %.2lf\n", a, res);
                }
                break;

            case 'T':
                res = atan(a); // Arctangent
                printf("\nArctangent of %.2lf (in radians) = %.2lf\n", a, res);
                break;

            case 'L':
                if (a <= 0) {
                    printf("\nError: Logarithm requires a positive number.\n"); // Handle non-positive input for natural logarithm
                } else {
                    res = log(a); // Natural logarithm
                    printf("\nNatural log of %.2lf = %.2lf\n", a, res);
                }
                break;

            case 'l':
                if (a <= 0) {
                    printf("\nError: Logarithm requires a positive number.\n"); // Handle non-positive input for base-10 logarithm
                } else {
                    res = log10(a); // Base-10 logarithm
                    printf("\nBase-10 log of %.2lf = %.2lf\n", a, res);
                }
                break;

            default:
                printf("\nInvalid operator. Please use one of +, -, *, %%, /, ^, e (exp), s (sqrt), c (cos), t (tan), i (sin), A (asin), C (acos), T (atan), L (log), l (log10).\n");
                break; // Handle invalid operator input
        }

        printf("\nDo you want to perform another calculation? (1 for yes, 0 for no): ");
        scanf("%d", &start); // Ask user if they want to continue
        if (start == 0) {
            break; // Exit loop if user chooses not to continue
        }
    }

    return 0; // End of the program
}
