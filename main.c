#include <stdio.h>

int main() {
    double number; 
    double result = 0;
    int value = 0;

    printf("Enter a number to select the conversion: \n 1. C to F.\n 2. F to C.\n 3. C to K.\n 4. K to C.\n 5. F to K.\n 6. K to F.\n");
    scanf("%d", &value);

    printf("Enter number: ");
    scanf("%lf", &number);


    switch (value)
    {
    case 1:
        result = number * 1.8 + 32;
        printf("Result convert from C to F: %.2lf", result);
        break;
    case 2:
        result = (number - 32) / 1.8;
        printf("Result convert from F to C: %.2lf", result);
        break;
    case 3:
        result = number + 273.15;
        printf("Result convert from C to K: %.2lf", result);
        break;
    case 4:
        result = number - 273.15;
        printf("Result convert from K to C: %.2lf", result);
        break;
    case 5:
        result = (number - 32) / 1.8 + 273.15;
        printf("Result convert from F to K: %.2lf", result);
        break;
    case 6:
        result = (number - 273.15) * 1.8 + 32;
        printf("Result convert from K to F: %.2lf", result);
        break;

    default:
        printf("Error");
        break;
    }

    return 0;
}