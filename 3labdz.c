#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    double a; // длина ребра
    printf("Введите стоимость обеда на одного человека (в рублях): ");
    scanf_s("%lf", &a);
    if (a < 0) {
        printf("Ошибка: длина ребра должна быть положительным числом :(\n");
        return 1;
    }
    else {
        // боковая поверхность
        double bokpov = 4 * pow(a, 2);

        // объём
        double V = pow(a, 3);

        printf("БОКОВАЯ ПОВЕРХНОСТЬ: %.0lf\n", bokpov);
        printf("^^\n");
        printf("ОБЪЁМ: %.0lf\n", V);

        return 0;
    }

}