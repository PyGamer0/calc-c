// Import
#include <stdio.h>

// Functions
double do_operation(double x, double y, char operation) {
    switch (operation) {
        case 'a':
            return x + y;
            break;
        case 's':
            return x - y;
            break;
        case 'm':
            return x * y;
            break;
        case 'd':
            return x / y;
            break;
        default:
            return 0;
            break;
    }
}

// Main Function
int main() {
    // Variable definition
    double n1;
    double n2;
    char op;

    // Inputs
    printf("Enter number 1: ");
    scanf("%lf", &n1);
    printf("You entered: %lf\n", n1);
    
    printf("Enter number 2: ");
    scanf("%lf", &n2);
    printf("You entered: %lf\n", n2);

    printf("Enter operation (a/s/m/d): ");
    scanf("%s", &op);

    // Out
    printf("Result: %f\n", do_operation(n1, n2, op));

    // Exit Status
    return 0;
}

