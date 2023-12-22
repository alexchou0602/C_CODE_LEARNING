//#include<stdio.h>
//int main ()
//{
//	printf("hello world!\n");
//    return 0;
//}

#include<stdio.h>
int main()
{
	const int MINOR = 35;
	int age = 0;
	printf("输入你的年龄：");
	scanf("%d", &age);
	printf("你的年龄是%d岁。\n", age);

	if (age < MINOR)
	{
		if (age <= 0)
		{
			printf("你的年龄输入有误。\n");
		}
		else
		{
			printf("你还挺年轻的。\n");
		}
	}
	else
		{
			printf("你挺成熟的。\n");
		}

	return 0;
}