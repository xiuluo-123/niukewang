#define _CRT_SECURE_NO_WARNINGS
//输出Hello Nowcoder
#include<stdio.h>

int main() {
	printf("Hello Nowcoder!\n");
	return 0;
}

//小飞机
#include<stdio.h>

int main() {
	printf("     **\n");
	printf("     **\n");
	printf("************\n");
	printf("************\n");
	printf("    *  *\n");
	printf("    *  *\n");
	return 0;
}

//整数
#include<stdio.h>

int main()
{
	int i = 0;
	scanf("%d\n", &i);
	printf("%d\n", i);
	return 0;
}

//浮点数
#include<stdio.h>

int main()
{
	float a;
	scanf("%f\n", &a);
	printf("%.3f\n", a);
	return 0;
}

//字符
#include<stdio.h>

int main()
{
	char arr[10];
	scanf("%s\n", &arr);
	printf("%s\n", arr);
	return 0;
}

//第二个整数
#include<stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d\n", &a, &b, &c);
	printf("%d\n", b);
	return 0;
}

//字符矩形
#include<stdio.h>

int main()
{
	char s;
	scanf("%c\n", &s);
	for (int r = 0; r<3; r++)
	{
		printf("%c%c%c\n", s, s, s);
	}
	return 0;

}

//字符菱形
#include<stdio.h>

int main()
{
	char s;
	scanf("%c\n", &s);
	printf("  %c\n", s);
	printf(" %c%c%c\n", s, s, s);
	printf("%c%c%c%c%c\n", s, s, s, s, s);
	printf(" %c%c%c\n", s, s, s);
	printf("  %c\n", s);
	return 0;
}