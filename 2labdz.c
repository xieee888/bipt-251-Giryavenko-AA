#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    double obed; // ��������� ����� �� ������ ��������
    printf("������� ��������� ����� �� ������ �������� (� ������): ");
    scanf_s("%lf", &obed);

    // ����� ����� ����� �� ����
    double obshaya = 4 * obed;

    // ����� ������ (15% �� ����� ����� �����)
    double chai = 0.15 * obshaya;

    printf("����� ������, ���������� ����������: %.2f ������\n", chai);

    return 0;

}


