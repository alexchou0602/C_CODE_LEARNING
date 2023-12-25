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
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int n = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &a);
//	printf("您输入的整数是%d。\n", a);
//
//	n++;
//	b=a / 10;
//	while (b>0)
//	{
//		n++;
//		b /= 10;
//	}
//	printf("这个整数是%d位数。\n", n);
//
//
//	return 0;
//}

////输入一个整数计算是几位数(使用do while，while结尾需要加:）
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int n = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &a);
//	printf("您输入的整数是%d。\n", a);
//
//	b = a;
//	do
//	{
//		n++;
//		b/= 10;
//	} while (b > 0);
//	
//	printf("这个整数是%d位数。\n", n);
//
//
//	return 0;
//}

//一个猜数的游戏

#include<stdlib.h>
#include<time.h>

//int main()
//{
//	srand(time(0));
//
//	//随机产生一个数对100取于，可随机得到一个0-100之间的随机数，+1为了避免得到0
//	int number = rand()%100+1;
//	int count = 0;
//	int a = 0;
//	printf("我已经想好了一个1到100之间的数。");
//	do
//	{
//		printf("猜猜这个数是什么: ");
//		scanf(" %d", &a);
//		count++;
//		if (a > number)
//		{
//			printf("你猜的数字大了。");
//		}
//		else
//		{
//			if (a<number)
//			{
//				printf("你猜的数字小了。");
//			}
//			
//		}
//	} while (a!=number);
//
//	printf("你用%d次猜到了正确数字。\n",count);
//
//	return 0;
//}


////算数平均数   do while后的条件为循环满足条件，不达到条件跳出循环
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


//倒序输出一个数字。while后的条件为执行循环满足条件
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


////计算一个数的阶乘
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

//计算一个数的阶乘，使用for循环。括号中条件后需加“；”。
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