#include <stdio.h>

int main() {
    float side, area;

    printf("Enter the length of a side of the square: ");
    scanf("%f", &side);

    area = side * side;

    printf("The area of the square is: %f\n", area);

    return 0;
}
