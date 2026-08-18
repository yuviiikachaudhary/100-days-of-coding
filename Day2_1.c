include <stdio.h>

int main() {
    float length, width, area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    area = length * width;
    perimeter = 2 * (length + width);
  
    printf("\n--- Results ---\n");
    printf("Area of the rectangle: %.2f square units\n", area);
    printf("perimeter of the rectangle: %.2f units\n", perimeter);
    return 0;
}
