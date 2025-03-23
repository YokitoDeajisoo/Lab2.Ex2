#include <stdio.h>

int main() {
    double a = -50.0;
    double b = 4.0;
    double c = 9.0;
    double y;

    // Обчислення значення функції y
    y = (c * a) / (a + b) + (b * c) / (c + a);

    // Виведення результату
    printf("Function value y: %.2lf\n", y);

    return 0;
}