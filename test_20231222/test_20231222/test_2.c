#include<stdio.h>

//��������������ֵ
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

//�ҳ�һ�������е����ֵ
//ָ������Ϊ�Ӻ����з��ض��ֵ

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


////ָ���1��ָ���Ǽ���һ����ָ����ָ�������͵Ĵ�С��
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
	 
//main���������������в����ģ���һ������Ϊ���β���argc���ڶ�������Ϊһ����ά���飬argc��ʾ�����һά�ȵĸ�����
//argv�ĵ�һ������argv[0]�Ǳ���������֣�
//int main(int argc, char const* argv[])
//{
//	int i;
//	for (i = 0; i < argc; i++)
//	{
//		printf("%d=%s\n", i, argv[i]);
//	}
//	return 0;
//}


//���������ȫû�㶮����������  strcpy�����������ǽ�һ���ַ������鸴�Ƶ���һ���ַ��������У������ĵ�һ��������Ŀ�ģ��ڶ���������Դ��
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
//	//����Ϊָ��汾�Ĵ���
//	char* ret = dst;
//	while(*dst++=*src++)
//	{ }
//	*dst = '\0';
//
//
//	return ret��
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


struct date     //�����ṹ����
{
	int month;
	int day;
	int year;
};             //��Ҫ���������ṹ������Ҫ���ֺ�

int main(int argc, char const* argv[])
{
	struct date today;  //����ṹ����

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