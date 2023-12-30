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

////计算一个数的阶乘，使用for循环。括号中条件后需加“；”。
//int main()
//{
//	int x = 0;
//	int n = 1;
//	int m = 1;
//	scanf("%d", &x);
//	 for(m=1;n<=x;n++)
//	 {
//		 m *= n;
//	 }
//	 printf("%d", m);
//
//
//
//	return 0;
//}



////判断素数  使用inPrime的值来判断真伪
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//
//
//	int n = 0;
//	int isPrime = 1;
//	for (n = 2; n < x; n++)
//	{
//		if (x % n == 0)
//		{
//			isPrime = 0;
//			break;
//		}
//	}
//
//	if (isPrime == 1)
//	{
//		printf("是素数\n");
//	}
//	else
//	{
//		printf("不是素数\n");
//	}
//
//	return 0;
//}

//输出100以内的素数

//int main()
//{
//	int x = 0;
//		for(x=2;x<=100;x++)
//		{
//			int n = 0;
//				int isPrime = 1;
//				for (n = 2; n < x; n++)
//				{
//					if (x % n == 0)
//					{
//						isPrime = 0;
//						break;
//					}
//				}
//				if (isPrime == 1)
//				{
//					printf("%d ",x);
//				}
//		}
//
//	return 0;
//}

////计算f（n）函数，1至n的倒数的和，注意double的数据类型，输出数据类型使用"%f"
//int main()
//{
//	int n = 0;
//	int i = 0;
//	double x = 0.0;
//
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		x += 1.0 / i;
//	}
//	printf("f(%d)=%f\n", n,x);
//
//	return 0;
//}

////f(n)函数，加减轮换，设置一个值sign，在每个循环使用sign=-sign，实现加减轮换,注意第一个是加还是减，调整sign初始值的正负
//int main()
//{
//	int n = 0;
//	int i = 0;
//	double x = 0.0;
//	int sign = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		x += sign*1.0 / i;
//		sign = -sign;
//	}
//	printf("f(%d)=%f\n", n,x);
//
//	return 0;
//}


//正序输出一个整数的每一位(不完美)
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d", &a);
//	
//	do 
//	{
//		b = a % 10;
//		c = c * 10 + b;
//		a/=10;
//	} while (a > 0);
//	//printf("%d\n", c);
//
//	int d = 0;
//	int e = 0;
//	do
//	{
//		d = c % 10;
//		printf("%d ", d);
//		c /= 10;
//	} while (c>0);
//
//
//
//	return 0;
//}

//正序输出一个整数的每一位（完美）
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	int mask = 1;
//	int n = x;
//
//	while (n > 9)
//	{
//		n /= 10;
//		mask *= 10;
//		//printf("%d ", mask);
//	} 
//	//printf("%d", mask);
//
//
//	    //1234 / 1000->1
//		//1234 % 1000->234
//		//1000 / 10->100
//		//234 / 100->2
//		//234 % 100->34
//		//100 / 10->10
//		//34 / 10->3
//		//34 % 10->4
//		//10 / 10->1
//		//4 / 1->4
//		//4 % 1->0
//		//1 / 10->0
//
//
//	do
//	{
//		int d = x / mask;
//		printf("%d ", d);
//		x %= mask;
//		mask /= 10;
//	} while (mask > 0);
//	
//
//	return 0;
//}

////函数的使用
//void sum(int begin, int end)
//{
//	int i;
//	int sum = 0;
//	for (i = begin; i <= end; i++)
//	{
//		sum += i;
//	}
//	printf("%d到%d的和是%d\n", begin, end, sum);
//}
//
//int main()
//{
//	sum(10, 20);
//	sum(20, 30);
//	sum(35, 45);
//
//	return 0;
//}



////正序输出一个整数的每一位（完美） 使用创建函数的方式，注意使用函数参数的传递，以及函数值的返回
//int res(int n, int mask)//函数中的变量名称跟函数外的变量名称虽然相同，但是不相互影响。
//{
//  while (n > 9)
//  {
//	n /= 10;
//	mask *= 10;
//  }
//
//  //printf("%d", mask);
//  return mask;//将函数的最终计算结果返回，将结果传递出来
//}
//
//
//int main()
//{
//	int x = 0;
//	int mask = 1;
//	scanf("%d", &x);
//
//
//	mask = res(x, mask);//将函数计算结果赋值
//	//while (n > 9)
//	//{
//	//	n /= 10;
//	//	mask *= 10;
//	//	//printf("%d ", mask);
//	//} 
//	////printf("%d", mask);
//
//
//		//1234 / 1000->1
//		//1234 % 1000->234
//		//1000 / 10->100
//		//234 / 100->2
//		//234 % 100->34
//		//100 / 10->10
//		//34 / 10->3
//		//34 % 10->4
//		//10 / 10->1
//		//4 / 1->4
//		//4 % 1->0
//		//1 / 10->0
//
//
//	do
//	{
//		int d = x / mask;
//		printf("%d ", d);
//		x %= mask;
//		mask /= 10;
//	} while (mask > 0);
//
//	return 0;
//}

	
/*定义一个函数，找出key在数组a中的位置
key是要寻找的数字
a是要寻找的数组
length是数组的长度
如果找到，返回a在其中的位置
如果找不到返回-1*/

int search(int key, int a[], int length)
{
	int ret = -1;
	int i;
	for (i = 0; i < length; i++)//遍历数组，因为数组第一个数字序号为0，所以最后一个数字序号为length-1，i<length
	{
		if(a[i]==key)
		{
			ret = i;
			break;
		}
	}
	return ret;
}



int main()
{
	int a[] = { 2,4,6,7,1,3,5,8,11,13,23,14,32 };//设定一个数组
	int x;
	int loc;
	printf("请输入一个数字：");
	scanf("%d", &x);  //输入一个目标数字
	loc = search(x, a, sizeof(a) / sizeof(a[0]));  //使用函数寻找数字在数组中的位置
	if(loc!=-1)
	{
		printf("%d在第%d个位置上\n", x, loc);
	}
	else
	{
		printf("%d不存在\n", x);
	}
	return 0;
}