#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    double a; // ����� �����
    printf("������� ��������� ����� �� ������ �������� (� ������): ");
    scanf_s("%lf", &a);
    if (a < 0) {
        printf("������: ����� ����� ������ ���� ������������� ������ :(\n");
        return 1;
    }
    else {
        // ������� �����������
        double bokpov = 4 * pow(a, 2);

        // �����
        double V = pow(a, 3);

        printf("������� �����������: %.0lf\n", bokpov);
        printf("^^\n");
        printf("��ڨ�: %.0lf\n", V);

        return 0;
    }

}