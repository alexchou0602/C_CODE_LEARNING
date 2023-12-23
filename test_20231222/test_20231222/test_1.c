#include<stdio.h>
//hello world
//int main ()
//{
//	printf("hello world!\n");
//    return 0;
//}


//输入不同年龄了获得不同答案
//int main()
//{
//	const int MINOR = 35;
//	int age = 0;
//	printf("输入你的年龄：");
//	scanf("%d", &age);
//	printf("你的年龄是%d岁。\n", age);
//
//	if (age < MINOR)
//	{
//		if (age <= 0)
//		{
//			printf("你挺有病的。\n");
//		}
//		else
//		{
//			printf("你还挺年轻的。\n");
//		}
//	}
//	else
//		{
//			printf("你挺成熟的。\n");
//		}
//
//	return 0;
//}

//输入货款和票面计算找零
//int main()
//{
//	int price = 0;
//	int bill = 0;
//	printf("请输入货款金额：");
//	scanf("%d", &price);
//	printf("请输入票面金额：");
//	scanf("%d", &bill);
//	if(bill>price)
//	{
//		printf("应该找零：%d\n", bill - price);
//	}
//	else
//	{
//		printf("您的钱不够。\n");
//	}
//	return 0;
//}

//两个整数比大小
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	printf("输入两个整数：");
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		max = a;
//		printf("大值为%d\n", max);
//	}
//	else
//	{
//		if (a == b)
//		{
//			printf("两值相同\n");
//		}
//		else
//		{
//			max = b;
//			printf("大值为%d\n", max);
//		}
//	}
//	return 0;
//}

//三个整数比大小
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int max = 0;
//
//	printf("输入三个整数：");
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
//	printf("最大值是%d。", max);
//
//
//	return 0;
//}

//输入一个整数计算是几位数(理解复合赋值）
int main()
{
	int a = 0;
	int b = 0;
	int n = 0;
	printf("请输入一个整数：");
	scanf("%d", &a);
	printf("您输入的整数是%d。\n", a);

	n++;
	b=a / 10;
	while (b>0)
	{
		n++;
		b /= 10;
	}
	printf("这个整数是%d位数。\n", n);


	return 0;
}