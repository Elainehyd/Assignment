
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<time.h>


int getNum() {
	return rand() % 101;
}//���������
int getOp() {
	return rand() % 2;//������������
}
int Calculate(int n) {
	FILE *fp;
	fopen_s(&fp,"result.txt", "w");
	fprintf(fp, "%s\n","1751906��ܲ��");
	for (int i = 1; i <= n; i++) {
		int j, k;
		int a[10];
		int num = (rand() % 3) + 3;//���������������
		for (j = 0; j < num + 1; j++) {
			a[j] = getNum();
		}//ȷ���������
		int num1 = rand() % (num + 1);//�����˳�������
		int m = 0;
		printf("%d", a[m]);
		fprintf(fp, "%d", a[m]);
		int sum = a[m];//������
		m++;
		for (j = 1; j <= num1; j++) {
			k = getOp();
			switch (k) {
			case 0: printf("*%d", a[m]); sum *= a[m]; fprintf(fp, "*%d", a[m]);  m++; break;
			case 1:printf("/%d", a[m]); sum /= a[m];  fprintf(fp, "/%d", a[m]); m++; break;
			default:;
			}
		}
		int num2 = num - num1;//�����Ӽ�������
		for (j = 1; j <= num2; j++) {
			k = getOp();
			switch (k) {
			case 0: printf("+%d", a[m]);  fprintf(fp, "+%d", a[m]); sum += a[m]; m++; break;
			case 1:printf("-%d", a[m]);  fprintf(fp, "-%d", a[m]); sum -= a[m]; m++; break;
			default:;
			}
		}
		printf("=%d\n", sum);
		fprintf(fp, "%s%d\n", "=", sum);
	}fclose(fp);
	return 0;
}
int main() {
	srand((int)time(NULL));
	int n = 0;
	printf("1751906��ܲ��\n");
	printf("please enter the number:");
	scanf_s("%d", &n);
	Calculate(n);
	system("pause");
	return 0;
}
