#include <stdio.h>

int main() {
    const int a = -50;
    const int b = 4;
    const int c = 9;
    double y;

    // Обчислення значення функції y
    y = (c * a) / (a + b) + (b * c) / (c + a);

    // Виведення результату
    printf("Function value y: %.2lf\n", y);

    return 0;
}
