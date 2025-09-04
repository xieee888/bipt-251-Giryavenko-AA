#include <stdio.h>
#include <locale.h>

void name()
{
	setlocale(LC_CTYPE, "RUS");
	puts("нажмите Enter для продолжения");
	getchar();
	puts("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *");
	puts("*                                                               *");
	puts("*           тема: Написание и компиляция консольного            *");
	puts("*            приложения в среде разработки MVS 2022             *");
	puts("*                                                               *");
	puts("*Выполнил Гирявенко А.А                                         *");
	puts("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *");

}

void date()
{
	puts("  . . .  .  _     _   _ ");
	puts(" /| |_| /| | |   | |   |");
	puts("  |   |. | |_| . |_|   |");
}

void main()
{
	name();
	date();
}