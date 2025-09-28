#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "Russian");
int A, B;
int pizza;
int x;
float peace;
printf("Введите Ваня=>A или Петя=>B.\"уровень голода\" - четное число : \n");
scanf("%i", &A);
scanf("%i", &B);
printf("Введите размер пиццы см^2: \n");
scanf("%i", &pizza);
if ((A % 2 == 0 && B % 2 != 0)) {
    x = 4;
    peace = (float)pizza / x;
    printf("ВАНЯ ПРОГОЛОДАЛСЯ\n");
    printf("4 куска по: %0.f см^2\n", peace);
} 
if (A % 2 != 0 && B % 2 == 0){
    x = 4;
    peace = (float)pizza / x;
    printf("ПЕТЯ ПРОГОЛОДАЛСЯ\n");
    printf("4 куска по: %0.f см^2\n", peace);
}
if (A % 2 != 0 && B % 2 != 0){
    x = 6;
    peace = (float)pizza / x;
    printf("Ваня&Петя оба голодные либо оба сытые\n");
    printf("6 кусков по: %0.f см^2\n", peace);
}
if (A % 2 == 0 && B % 2 == 0){
    x = 6;
    peace = (float)pizza / x;
    printf("Ваня&Петя оба голодные либо оба сытые\n");
    printf("6 кусков по: %0.f см^2\n", peace);
}
}
