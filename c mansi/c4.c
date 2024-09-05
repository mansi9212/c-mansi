

#include <stdio.h>

int main() {
    float angle1, angle2, third_angle;


    printf("Enter the first angle: ");
    scanf("%f", &angle1);
    printf("Enter the second angle: ");
    scanf("%f", &angle2);

    third_angle = 90 - (angle1 + angle2);

    printf("The third angle is: %.2f\n", third_angle);

    return 0;
}


