//#include<stdio.h>
//int main ()
//{
//	printf("hello world!\n");
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	const int MINOR = 35;
//	int age = 0;
//	printf("����������䣺");
//	scanf("%d", &age);
//	printf("���������%d�ꡣ\n", age);
//
//	if (age < MINOR)
//	{
//		if (age <= 0)
//		{
//			printf("��ͦ�в��ġ�\n");
//		}
//		else
//		{
//			printf("�㻹ͦ����ġ�\n");
//		}
//	}
//	else
//		{
//			printf("��ͦ����ġ�\n");
//		}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int price = 0;
//	int bill = 0;
//	printf("����������");
//	scanf("%d", &price);
//	printf("������Ʊ���");
//	scanf("%d", &bill);
//	if(bill>price)
//	{
//		printf("Ӧ�����㣺%d\n", bill - price);
//	}
//	else
//	{
//		printf("����Ǯ������\n");
//	}
//
//
//	return 0;
//}

#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int max = 0;
	printf("��������������");
	scanf("%d %d", &a, &b);
	if (a > b)
	{
		max = a;
		printf("��ֵΪ%d\n", max);

	}
	else
	{
		if (a == b)
		{
			printf("��ֵ��ͬ\n");

		}
		else
		{
			max = b;
			printf("��ֵΪ%d\n", max);
		}
	}



	return 0;
}