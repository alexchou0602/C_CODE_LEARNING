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
	printf("����������䣺");
	scanf("%d", &age);
	printf("���������%d�ꡣ\n", age);

	if (age < MINOR)
	{
		if (age <= 0)
		{
			printf("���������������\n");
		}
		else
		{
			printf("�㻹ͦ����ġ�\n");
		}
	}
	else
		{
			printf("��ͦ����ġ�\n");
		}

	return 0;
}