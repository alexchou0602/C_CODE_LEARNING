#include<stdio.h>

//交换两个变量的值
//void swap(int* pa, int* pb);
//
//int main(void)
//{
//	int a = 5;
//	int b = 6;
//	swap(&a, &b);
//
//	printf("a=%d,b=%d\n", a, b);
//
//
//	return 0;
//}
//
//void swap(int* pa, int* pb)
//{
//	int t = *pa;
//	*pa = *pb;
//	*pb = t;
//}

//找出一个数组中的最大值
//指针作用为从函数中返回多个值

//void minmax(int a[], int len, int* min, int* max);
//
//int main(void)
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,45,65 };
//	int min;
//	int max;
//	minmax(a, sizeof(a) / sizeof(a[0]), &min, &max);
//	printf("min=%d,max=%d\n", min, max);
//
//
//	return 0;
//}
//
//void minmax(int a[], int len, int* min, int* max)
//{
//	int i;
//	*min = *max = a[0];
//	for (i = 1; i < len; i++)
//	{
//		if (a[i] < *min)
//		{
//			*min = a[i];
//		}
//		if (a[i > *max])
//		{
//			*max = a[i];
//		}\

//


////指针加1，指的是加上一个该指针所指变量类型的大小。
//int main(void)
//{
//	char ac[] = { 0,1,2,3,4,5,6,7,8,9 };
//	char* p = &ac[0];
//	char* p1 = &ac[5];
//	printf("p=%p\n", p);
//	printf("p+1=%p\n", p + 1);
//	printf("p1-p=%d\n", p1 - p);
//	int ai[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* q = &ai[0];
//	char* q1 = &ai[5];
//	printf("q=%p\n", q);
//	printf("q+1=%p\n", q+1);
//	printf("q1=%p\n", q1);
//	printf("q1-q=%d\n", q1 - q);
//	return 0;
//}
#include <string.h>
	 
//main函数的括号中是有参数的，第一个参数为整形参数argc，第二个参数为一个二维数组，argc显示数组第一维度的个数。
//argv的第一个参数argv[0]是本程序的名字，
//int main(int argc, char const* argv[])
//{
//	int i;
//	for (i = 0; i < argc; i++)
//	{
//		printf("%d=%s\n", i, argv[i]);
//	}
//	return 0;
//}


//下面这段完全没搞懂！！！！！  strcpy函数的作用是将一个字符串数组复制到另一个字符串数组中，函数的第一个参数是目的，第二个参数是源。
//char* mycpy(char* dst, const char* src)
//{
//	int idx = 0;
//	while (src[idx]!='\0')
//	{
//		dst[idx] = src[idx];
//		idx++;
//	}
//	dst[idx] = '\0';
//	return dst
//	//以下为指针版本的代码
//	char* ret = dst;
//	while(*dst++=*src++)
//	{ }
//	*dst = '\0';
//
//
//	return ret；
//}
//
//int main(int argc, char const* argv[])
//{
//	char s1[] = "abc";
//	char s2[] = "efg";
//	strcpy(s1, s2);
//
//
//	printf("%s\n", &s1);
//	
//	
//
//	return 0;
//}


struct date     //声明结构类型
{
	int month;
	int day;
	int year;
};             //不要忘记声明结构后面需要带分号

int main(int argc, char const* argv[])
{
	struct date today;  //定义结构变量

	today.month = 01;
	today.day = 10;
	today.year = 2024;

	printf("Today's date is %i-%i-%i.\n",
		today.year, today.month, today.day);

	struct date day;
	day = today;
	
	printf("Today's date is %i-%i-%i.\n",
		day.year, day.month, day.day);

	return 0;
}