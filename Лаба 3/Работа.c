#define _CRT_SECURE_NO_DEPRECATE

#include <locale.h>

#include <stdio.h>

#define      D       2,54

#define      Pul       2,32166

#define      Starlit       2,7076

#define      Sea       1852

work1();
work2();
work21();
work3();
home();

int main()
{
	work2();
	return 0;
}

int work1()
{
	setlocale(LC_ALL, "RUS");
	int num1, num2,num3;
	puts("Введите число");
	scanf("%d", &num1);
	printf("Введено значение %d", num1);
	printf("\n");
	puts("Введите второе число");
	scanf("%d", &num2);
	puts("Введите третье число");
	scanf("%d", &num3);
	printf("Введено значение %d", num2);
	printf("\n");
	printf("%d - сложение,\n%d - вычитание,\n%d - умножение,\n%d - остаток от деления", num1 + num2 + num3, num1 - num2, num1 * num2, num2 % num1);
	return 0;
}

int work2() 
{
	setlocale(LC_ALL, "RUS");

	int dym;

	float engres, espres, litres;

	printf("введите количество Дюймов");
	scanf("%d", &dym);
	engres = dym * D + 0.1 * (dym * D);
	espres = dym * Pul + 0.1 * (dym * Pul);
	litres = dym * Starlit + 0.1 * (dym * Starlit);

	printf("%d Английских дюймов - это %.1f см\n", dym, engres);
	printf("%d Испанских дюймов - это %.1f см\n", dym, espres);
	printf("%d Старолитовских дюймов - это %.1f см\n", dym, litres);
	return 0;
}
int work21()
{
	setlocale(LC_ALL, "RUS");

	int miles;

	float kms;

	printf("введите количество Морских миль");
	scanf("%d", &miles);
	kms = (miles * Sea)/1000 + 0.001 * ((miles*Sea)%1000);
	printf("%d Морских миль - это %.3f км\n", miles, kms);
	return 0;
}

int work3()
{
	int a1, b1;
	setlocale(LC_ALL, "RUS");
	printf("Число a = ");
	scanf("%d", &a1);
	printf("Число b = ");
	scanf("%d", &b1);
	printf("_________________________\n");
	printf("|%7s|%7s|%7s|\n","a + b","a - b","a * b");
	printf("-------------------------\n");
	printf("| %d +  %d| %d -  %d|%d  *  %d|\n", a1,b1, a1, b1, a1, b1);
	printf("-------------------------\n");
	printf("|%7d|%7d|%7d|\n", a1+b1,a1-b1,a1*b1);
	printf("-------------------------");
	return 0;

}

int home()
{
	int len, wid;
	setlocale(LC_ALL, "RUS");
	printf("введите длину");
	scanf("%d", &len);
	printf("введите ширину");
	scanf("%d", &wid);
	printf("площадь равна %d", len * wid);
	return 0;
}