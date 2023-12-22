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

//#include <stdio.h>
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
	printf("输入两个整数：");
	scanf("%d %d", &a, &b);
	if (a > b)
	{
		max = a;
		printf("大值为%d\n", max);

	}
	else
	{
		if (a == b)
		{
			printf("两值相同\n");

		}
		else
		{
			max = b;
			printf("大值为%d\n", max);
		}
	}



	return 0;
}