#include<stdio.h>
//hello world
//int main ()
//{
//	printf("hello world!\n");
//    return 0;
//}


//���벻ͬ�����˻�ò�ͬ��
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

//��������Ʊ���������
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
//	return 0;
//}

//���������ȴ�С
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	printf("��������������");
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		max = a;
//		printf("��ֵΪ%d\n", max);
//	}
//	else
//	{
//		if (a == b)
//		{
//			printf("��ֵ��ͬ\n");
//		}
//		else
//		{
//			max = b;
//			printf("��ֵΪ%d\n", max);
//		}
//	}
//	return 0;
//}

//���������ȴ�С
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int max = 0;
//
//	printf("��������������");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		if (a > c)
//		{
//			max = a;
//		}
//		else
//		{
//			max = c;
//		}
//	}
//	else
//	{
//		if (b > c)
//		{
//			max = b;
//		}
//		else
//		{
//			max = c;
//		}
//	}
//	printf("���ֵ��%d��", max);
//
//
//	return 0;
//}

//����һ�����������Ǽ�λ��(��⸴�ϸ�ֵ��
int main()
{
	int a = 0;
	int b = 0;
	int n = 0;
	printf("������һ��������");
	scanf("%d", &a);
	printf("�������������%d��\n", a);

	n++;
	b=a / 10;
	while (b>0)
	{
		n++;
		b /= 10;
	}
	printf("���������%dλ����\n", n);


	return 0;
}