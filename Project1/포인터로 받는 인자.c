include <stdio.h>
int change_val(int* pi) {
	printf("----- change_val �Լ� �ȿ��� -----\n");
	printf("pi�� �� : %p \n", pi);
	printf("pi �� ����Ű�� ���� �� : %d \n", *pi);
	
	*pi = 3;

	printf("----- change_val �Լ� ��~~ -----\n");
	return 0;
}
int main() {
	int i = 0;

	printf("i ������ �ּҰ� : %d \n", &i);
	printf("ȣ�� ���� i �� �� : %d \n", i);
	change_val(&i);
	printf("ȣ�� ���� i�� �� : %d \n", i);

	return 0;
}

int swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;

	return 0;
}
int main(){
	int i, j;
	i = 3;
	j = 5;

	printf("SWAP ���� : i : %d, j : %d \n", i, j);

	swap(&i, &j);

	printf("SWAP ���� : i : %d, j : %d \n", i, j);

	return 0;
}

int swap(int* a, int* b);//�Լ��� ����
int main() {
	int i, j;
	i = 3;
	j = 5;
	printf("SWAP ���� : i : %d, j : %d \n", i, j);
	swap(&i,&j);
	printf("SWAP ���� : i : %d, j : %d \n", i, j);

	return 0;
}
int swap(int* a, int* b) {
	int temp = *a;

	*a = *b;
	*b = temp;

	return 0;
}

int main(void) {
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;
	int i;
	for (i = 0; i < 5; i++)
	{
		*ptr += 2;
		ptr++;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}

void eo(int *i) {
	int tt = 0;
	int e, o;
	printf("�Է� :");
	scanf("%d", tt);
	if (tt % 2 == 0) {							
		i = &tt;
		printf("¦����� : %d", *i);
	}
	else {
		i = &tt;
	}
	printf("%d\n", i);
}
int main() {
	int arr[10] = {0,};
	int num = 0;
	int* o, * e;
	printf("�� 10���� ���� �Է�");
	while (num < 9) {
		int eo(i);
		num++;
	}
	printf("Ȧ����� : %d\n", *o);
	printf("¦����� : %d\n", *e);
}

//gcc -c ex02.c
//gcc -o exam02 ex02.o
//./ exam02
//
//./  �� �� ���� 
//
//
//gcc -o ex02.out ex02.c
//./ ex02.out


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Hol(int X)
{
    if (X % 2 == 1)
    {
        printf("%d", X);
    }
    return 0;
}

int JJak(int Y)
{
    if (Y % 2 == 0)
    {
        printf("%d", Y);
    }
    return 0;
}

int main(void)
{
    int Array[10];
    int i;

    printf("�� 10���� ���ڸ� �Է��ϼ��� : ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &Array[i]);
    }

    printf("\nȦ�� ��� : ");
    for (int i = 0; i < 10; i++)
    {
        Hol(Array[i]);
    }

    printf("\n¦�� ��� : ");
    for (int i = 0; i < 10; i++)
    {
        JJak(Array[i]);
    }
    return 0;
}