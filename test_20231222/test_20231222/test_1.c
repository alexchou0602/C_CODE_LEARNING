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
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int n = 0;
//	printf("������һ��������");
//	scanf("%d", &a);
//	printf("�������������%d��\n", a);
//
//	n++;
//	b=a / 10;
//	while (b>0)
//	{
//		n++;
//		b /= 10;
//	}
//	printf("���������%dλ����\n", n);
//
//
//	return 0;
//}

////����һ�����������Ǽ�λ��(ʹ��do while��while��β��Ҫ��:��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int n = 0;
//	printf("������һ��������");
//	scanf("%d", &a);
//	printf("�������������%d��\n", a);
//
//	b = a;
//	do
//	{
//		n++;
//		b/= 10;
//	} while (b > 0);
//	
//	printf("���������%dλ����\n", n);
//
//
//	return 0;
//}

//һ����������Ϸ

#include<stdlib.h>
#include<time.h>

//int main()
//{
//	srand(time(0));
//
//	//�������һ������100ȡ�ڣ�������õ�һ��0-100֮����������+1Ϊ�˱���õ�0
//	int number = rand()%100+1;
//	int count = 0;
//	int a = 0;
//	printf("���Ѿ������һ��1��100֮�������");
//	do
//	{
//		printf("�²��������ʲô: ");
//		scanf(" %d", &a);
//		count++;
//		if (a > number)
//		{
//			printf("��µ����ִ��ˡ�");
//		}
//		else
//		{
//			if (a<number)
//			{
//				printf("��µ�����С�ˡ�");
//			}
//			
//		}
//	} while (a!=number);
//
//	printf("����%d�βµ�����ȷ���֡�\n",count);
//
//	return 0;
//}


////����ƽ����   do while�������Ϊѭ���������������ﵽ��������ѭ��
//int main()
//{
//	int sum = 0;
//	int count = 0;
//	int num = 0;
//
//	do
//	{
//		scanf("%d", &num);
//		if (num != -1)
//		{
//			sum += num;
//			count++;
//		}
//	} while (num != -1);
//	printf("%d %d", sum, count);
//	
//	return 0;
//
//}


//�������һ�����֡�while�������Ϊִ��ѭ����������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//
//	while (a>0)
//	{
//		b = a % 10;
//		printf("%d", b);
//		a /=10;
//	} 
//	
//
//
//	return 0;
//}


////����һ�����Ľ׳�
//int main()
//{
//	int x = 0;
//	int n = 1;
//	int m = 1;
//	scanf("%d", &x);
//
//	while (n <=x)
//	{
//		m *= n;
//		n++;
//	}
//	printf("%d", m);
//
//
//	return 0;
//}

//����һ�����Ľ׳ˣ�ʹ��forѭ������������������ӡ�������
int main()
{
	int x = 0;
	int n = 1;
	int m = 1;
	scanf("%d", &x);
	 for(m=1;n<=x;n++)
	 {
		 m *= n;
	 }
	 printf("%d", m);



	return 0;
}