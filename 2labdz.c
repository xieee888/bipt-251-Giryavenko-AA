#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    double obed; // Стоимость обеда на одного человека
    printf("Введите стоимость обеда на одного человека (в рублях): ");
    scanf_s("%lf", &obed);

    // Общая сумма счета за обед
    double obshaya = 4 * obed;

    // Сумма чаевых (15% от общей суммы счета)
    double chai = 0.15 * obshaya;

    printf("Сумма чаевых, полученных официантом: %.2f рублей\n", chai);

    return 0;

}


