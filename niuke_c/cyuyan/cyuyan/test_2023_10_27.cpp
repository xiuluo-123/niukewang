//�ɼ��������
///*#include<stdio.h>
//
//int main() {
//	int score1, score2, score3;
//	scanf("%d %d %d\n", &score1, &score2, &score3);
//	printf("score1=%d,score2=%d,score3=%d", score1, score2, score3);
//	*/return 0;
//}
//ѧ��������Ϣ�������
//#include<stdio.h>
//
//int main() {
//	int a;
//	float b, c, d;
//	scanf("%d;%f,%f,%f", &a, &b, &c, &d);
//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", a, b, c, d);
//	return 0;
//}
//���������������
#include<stdio.h>

int main() {
	int year, month, day;
	scanf("%4d%2d%2d", &year, &month, &day);
	printf("year=%d\n", year);
	printf("month=%02d\n", month);
	printf("date=%02d\n", day);
	return 0;
}