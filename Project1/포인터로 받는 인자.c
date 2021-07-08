include <stdio.h>
int change_val(int* pi) {
	printf("----- change_val 함수 안에서 -----\n");
	printf("pi의 값 : %p \n", pi);
	printf("pi 가 가리키는 것의 값 : %d \n", *pi);
	
	*pi = 3;

	printf("----- change_val 함수 끝~~ -----\n");
	return 0;
}
int main() {
	int i = 0;

	printf("i 변수의 주소값 : %d \n", &i);
	printf("호출 이전 i 의 값 : %d \n", i);
	change_val(&i);
	printf("호출 이후 i의 값 : %d \n", i);

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

	printf("SWAP 이전 : i : %d, j : %d \n", i, j);

	swap(&i, &j);

	printf("SWAP 이후 : i : %d, j : %d \n", i, j);

	return 0;
}

int swap(int* a, int* b);//함수의 원형
int main() {
	int i, j;
	i = 3;
	j = 5;
	printf("SWAP 이전 : i : %d, j : %d \n", i, j);
	swap(&i,&j);
	printf("SWAP 이후 : i : %d, j : %d \n", i, j);

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
	printf("입력 :");
	scanf("%d", tt);
	if (tt % 2 == 0) {							
		i = &tt;
		printf("짝수출력 : %d", *i);
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
	printf("총 10개의 숫자 입력");
	while (num < 9) {
		int eo(i);
		num++;
	}
	printf("홀수출력 : %d\n", *o);
	printf("짝수출력 : %d\n", *e);
}

//gcc -c ex02.c
//gcc -o exam02 ex02.o
//./ exam02
//
//./  가 내 폴더 
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

    printf("총 10개의 숫자를 입력하세요 : ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &Array[i]);
    }

    printf("\n홀수 출력 : ");
    for (int i = 0; i < 10; i++)
    {
        Hol(Array[i]);
    }

    printf("\n짝수 출력 : ");
    for (int i = 0; i < 10; i++)
    {
        JJak(Array[i]);
    }
    return 0;
}