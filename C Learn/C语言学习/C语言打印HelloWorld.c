//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////SELF函数用于判断一个数字是否有零或者重复的数字
//int SELF(int* p)
//{
//	if ((p[0]!= 0) && (p[1] != 0) && (p[2] != 0))
//	{
//		if (p[0] == p[1] || p[0] == p[2] || p[1] == p[2])
//		{
//			return 0;
//		}
//		else
//			return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
////SEARCH函数用于判断两个数字之间是否有相同的数字
//int SEARCH(int* num1, int* num2, int x)
//{
//	for(int i = 0;i <x; i++)
//	{
//		int search = num1[i];
//		for (int n = 0;n < x;n++)
//			{
//				if (search == num2[n])
//				{
//					return 0;
//				}
//			}
//	}
//	return 1;
//}
////TNUM函数用于提取输入数字的个十百并放入到数组中
//void TNUM(int x , int* p)
//{
//	int bit, ten, hun;
//	bit = x % 10;
//	ten = (x / 10) % 10;
//	hun = x / 100;
//	p[0] = bit;
//	p[1] = ten;
//	p[2] = hun;
//}
////JUDGE函数用于判断是否符合题目要求
//int JUDGE(int x, int y, int z)
//{
//	int num1[3], num2[3], num3[3];
//	TNUM(x, num1);
//	TNUM(y, num2);
//	TNUM(z, num3);
//	if (SELF(num1) && SELF(num2) && SELF(num3))
//	{
//		if (SEARCH(num1, num2, 3) == 1)
//		{
//			if (SEARCH(num1, num3, 3) == 1)
//			{
//				if (SEARCH(num2, num3, 3) == 1)
//				{
//					return 1;
//				}
//			}
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int j = 0;
//	for (int i = 123; i * 3 < 1000; i++)
//	{
//		if (j = JUDGE(i, i * 2, i * 3))
//		{
//			printf("%d %d %d\n", i, i * 2, i * 3);
//		}
//	}
//	return 0;
//}
// 
// 
//int main()
//{
//
//
//	return 0;
//}
//long judge1(long num2)
//{
//	long num1 = reverse(num2);
//	if (num1 == num2)
//		return 0;
//	else
//		return 1;
//}
//long reverse(long number)
//{
//	long tmp = 0;
//	while (number != 0)
//	{
//		tmp = (tmp * 10 + number % 10);
//		number = number / 10;
//	}
//	if (number < 0)
//		return (-tmp);
//	else
//		return tmp;
//}
//void judge(long x, long* step)
//{
//	int count = 0;
//	int j = 0;
//	j = judge1(x);
//	if (j == 0)
//		return 0;
//	else
//	{
//		long sum = x;
//		do
//		{
//			sum = sum + reverse(sum);
//			count++;
//		} while (judge1(sum));
//	}
//	*step = count;
//}
//int main()
//{
//	long judge1(long num2);
//	long reverse(long number);
//	void judge(long x, long* step);
//	long num;
//	int step = 0;
//	printf("please enter a number:> ");
//	scanf("%d", &num);
//	judge(num, &step);
//	if (step <= 30)
//		printf("STEP = %d\n", step);
//	else
//		printf("Impossible");
//}
//void fun(int x , int* pp ,int* n )
//{
//	int count = 0;
//	for (int i = 1 ; i <= x; i++)
//	{
//		if ((x % i == 0) && (i % 2 == 0))
//		{
//			pp[count] = i;
//			count++;
//		}
//	}
//	*n = count;
//
//
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int pp[100];
//
//	void fun(int x, int* pp, int* n);
//	printf("请输入需查询偶数因子的数:> ");
//	scanf("%d", &i);
//	fun(i,pp,&n);
//	printf("%d的偶数因子有:>",i);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", pp[i]);
//	}
//	printf("\n一共%d个", n);
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	if (i % 2 == 0)
//	{
//		printf("%dSHIGOUSHU", i);
//
//	}
//	else
//	{
//		printf("%d", i);
//
//	}
//	return 0;
//}
//int FACTORIAL(int x)
//{
//	if (x <= 0)
//		return 0;
//	else if (x > 0 && x <= 12)
//	{
//		int i = 1;
//		int sum = 1;
//		for (i = 1; i <= x; i++)
//		{
//			sum = sum * i;
//		}
//		printf("%d!=%d\n", x, sum);
//		return 1;
//	}
//	else
//		return 2;
//}
//
//int main()
//{
//	int x = 0;
//	int p = 0;
//	printf("请输入一个数字:>");
//	scanf("%d", &x);
//	p = FACTORIAL(x);
//	printf("返回值为%d", p);
//	return 0;
//}
//void PRINTNUM(int i)
//{
//	for (int a = 1 ; a <= i; a++)
//	{
//		printf("%-2d ", a);
//	}
//}
//int main()
//{
//	int x = 0;
//	printf("请输入截止数:>");
//L1:
//	scanf("%d", &x);
//	if (x > 0)
//	{
//		printf("打印结果:>  ");
//		PRINTNUM(x);
//	}
//	else
//	{
//		printf("只能打印正整数,您输入的数小于或等于0,请重新输入:>");
//		goto L1;
//	}
//	return 0;
//}
//#include <string.h>
////#include <Windows.h>
//int main()
//{
//	char arr[20] = "0";
//	char arr2[20] = "0";
//	int n = 0;
//	int m = 0;
//	scanf("%s", arr);
//	scanf("%d", &n);
//	while (m <= n)
//	{
//		arr[20] = MOVE(arr);
//		printf("%s\n", arr);
//		Sleep(200);
//	}
//
//	/*for (int x = 0; x < i; x++)
//	{*/
//		//int y = x + 1;
//		/*arr1[x] = arr1[y] ^ arr1[x];
//		arr1[y] = arr1[x] ^ arr1[y];
//		arr1[x] = arr1[x] ^ arr1[y];*/
//			/*arr2[0] = arr1[i-1];
//			for (int a = 1,b = 1;a < i;a++,b++)
//			{
//				arr2[b] = arr1[a];
//				printf("%s\n", arr2);
//			}
//			arr2[i-1] = arr1[0];*/
//		printf("%s\n" ,arr);
//		Sleep(200);
//	/*}*/




//	return 0;
//}
//char MOVE(char arr1[])
//{
//	char arr2[20];
//	int i = 0;
//	i = strlen(arr1);
//	arr2[0] = arr1[i - 1];
//	for (int a = 1, b = 1; a < i; a++, b++)
//	{
//		arr2[b] = arr1[a];
//		printf("%s\n", arr2);
//	}
//	arr2[i - 1] = arr1[0];
//	return arr2;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char a[100];
//    printf("请输入一串字符\n");
//    scanf("%s", a);
//    //int right = sizeof(a) / sizeof(a[0]) - 2;
//    int right = strlen(a) - 1;
//    int left = 0;
//    while (left <= right)
//    {
//        //char g = a[right];
//        //a[right] = a[left];
//        //a[left] = g;
//        //(int)a[right] = (int)a[left] + (int)a[right];
//        //(int)a[left] = (int)a[right] - (int)a[left];
//        //(int)a[right] = (int)a[right] + (int)a[left];
//        *(&a[0] - 1) = a[left];
//        a[left] = a[right];
//        a[right] = *(&a[0] - 1);
//        //a[right] = a[right] ^ a[left];
//        //a[left] = a[right] ^ a[left];
//        //a[right] = a[right] ^ a[left];
//        left++;
//        right--;
//    }
//    printf("%s", a);
//    return 0;
//}
//#include <Windows.h>
//
//int main()
//{
//	int input = 0;
//	int count_1 = 0;
//	int count_2 = 0;
//	int sum_1 = 0;
//	int sum_2 = 0;
//	int j = 0;
//	//double average_1 = 0;
//	//double average_2 = 0;
//	do
//	{
//		system("cls");
//		printf("请输入整数,0为退出\n");
//		printf("请输入:> ");
//		scanf("%d", &input);
//		Sleep(100);
//		if (input == 0)
//			continue;
//		switch (input % 2)
//		{
//		case(0):
//			sum_2 += input;
//			count_2++;
//			break;
//		case(1):
//			sum_1 += input;
//			count_1++;
//			break;
//		}
//	} while (input);
//	if (count_1 == 0)
//		printf("无奇数输入\n");
//	else
//	//average_1 = (double) sum_1 / count_1;
//	printf("奇数有%d个,所输入的奇数的平均数为%lf\n",count_1, (double)sum_1 / count_1);
//	if(count_2 == 0)
//		printf("无偶数输入\n");
//	else
//	//average_2 = (double) sum_2 / count_2;
//	printf("偶数有%d个, 所输入的偶数的平均数为%lf\n", count_2, (double)sum_2 / count_2);
//	return 0;
//}
//#include <windows.h>
//#include <conio.h>
//int main()
//{
//	int j = 0;
//	do
//	{
//		j = 0;
//		system("cls");
		//printf("###############################\n");
		//printf("#### 优秀员工资格查询系统  ####\n");
		//printf("###############################\n");
		//printf("######  1.查询  2.退出  #######\n");
		//printf("###############################\n");
		//printf("请输入:> ");
//		scanf("%d",&j);
//		system("cls");
//		if (j==2)
//		{
//			j = 0;
//		}
//		if (j == 1)
//		{
//			int ach = 0;
//			int year = 0;
//			char name[10]="0";
//			printf("请输入您的姓名:>");
//			scanf("%s", name);
//			system("cls");
//			printf("请输入您的入职年数:>");
//			scanf("%d", &year);
//			system("cls");
//			printf("请输入您的业绩:>");
//			scanf("%d", &ach);
//			system("cls");
//			if (year >= 2 && ach > 100)
//			{
//				printf("%s有资格获得优秀员工奖\n", name);
//				break;
//			}
//			else
//			{
//				if (year < 2  && ach >= 100)
//				{
//					printf("%s入职年数不足两年，没有资格获得优秀员工奖\n", name);
//					break;
//				}
//				else if(year >= 2 && ach <= 100)
//				{
//					printf("%s业绩不足100万以上，没有资格获得优秀员工奖\n", name);
//					break;
//				}
//				else
//				{
//					printf("%s入职年数不足两年且业绩不足100万以上，没有资格获得优秀员工奖\n", name);
//					break;
//				}
//			}
//		}
//		else if (j != 1 && j != 0)
//		{
//			printf("输入错误");
//			Sleep(1000);
//		}
//	} while (j);
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	printf("请输入判断年份:> ");
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0)
//		printf("%d是闰年", year);
//	else if(year % 400 == 0)
//		printf("%d是世纪闰年", year);
//	else
//		printf("%d是世纪平年", year);
//	return 0;
//}
//#include <stdlib.h>
//#include <windows.h>
//#include <time.h>
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	system("cls");
//	ret = rand()%100 + 1;
//	while (1)
//	{
//		system("cls");
//		printf("请猜数字:> ");
//		scanf("%d", &guess);
//		if (guess>ret)
//		{
//			system("cls");
//			printf("猜大了\n");
//			Sleep(1000);
//		}
//		else if (guess < ret)
//		{
//			system("cls");
//			printf("猜小了\n");
//			Sleep(1000);
//		}
//		else
//		{
//			system("cls");
//			printf("恭喜你,猜对了\n");
//			Sleep(1000);
//			break;
//		}
//	}
//}
//void menu()
//{
//	system("cls");
//	printf("###############################\n");
//	printf("######  1.play  2.exit  #######\n");
//	printf("###############################\n");
//	printf("请输入:> ");
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			system("cls");
//			game();
//			break;
//		case 2:
//			input = 0;
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误");
//			Sleep(1000);
//			system("cls");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//int FACTORIAL(int x)
//{
//	int factorial = 1;
//	for (int i = 1; i <= x; i++)
//	{
//		factorial = factorial * i;
//	}
//	return factorial;
//}
//int main()
//{
//	int x = 0;
//	printf("输入需要阶乘运算的数:> ");
//	scanf("%d", &x);
//	printf("%d! = %d ", x,FACTORIAL(x));
//	return 0;
//}
//打印9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int SUM (int x,int y)
//{
//	int sum = 0;
//	sum = x + y;
//	return sum;
//
//}
//
//int main()
//{
//	int a = 299;
//	int b = 237;
//	int i = SUM(a, b);
//	printf("%d", i);
//	return 0;
//}
////辗转相除法求最大公约数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m%n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d", n);
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个数字xy进行变量交换:> ");
//	scanf("%d%d", &x, &y);
//	printf("交换前 x = %d  y = %d \n", x, y);
//	x = x + y;
//	y = x - y;
//	x = x - y;
//	printf("交换后 x = %d  y = %d \n", x, y);
//
//
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int y = 0;
//	int count = 0;
//	printf("请给出一个范围的起始数和截止数 \n");
//	scanf("%d%d",&n,&m);
//	int judge(int x);//判断n是否为素数
//	printf("%d~%d之间的素数有:> ",n,m);
//	for(y = n;y >= n && y <= m; y++)
//	{
//		if (judge(y) == y)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\n一共有%d个", count);
//	return 0;
//}
//int judge(int x)
//{
//	int i = 2;
//	for (i = 2; i >=2 && i<= x; i++)
//		{
//			if (x % i == 0)
//			{
//			 break;
//			}
//		}
//	if (i == x)
//	{
//	 return i;
//	}
//}



//#include <windows.h>
//void color(short x)
//{
//	if (x >= 0 && x <= 15)
//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
//	else
//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
//}
//
//int main()
//{
//	color(4);   printf("     ******       ******\n");
//	color(4);   printf("  ***********   ***********\n");
//	color(4);   printf("************** **************\n");
//	color(4);   printf("*****************************\n");
//	color(4);   printf("******   电       协   ******\n");
//	color(4);   printf(" *********** NO.1 **********\n");
//	color(4);   printf("   ***********************\n");
//	color(4);	printf("     *******************\n");
//	color(4);   printf("       ***************\n");
//	color(4);   printf("         ***********\n");
//	color(4);   printf("           *******\n");
//	color(4);   printf("             ***\n");
//	color(4);   printf("              * \n");
//
//	return 0;
//}
//int main()
//{
//
//    printf("     ******       ******\n");
//    printf("  ***********   ***********\n");
//    printf("************** **************\n");
//    printf("*****************************\n");
//    printf("*****************************\n");
//    printf(" ***************************\n");
//    printf("   ***********************\n");
//    printf("     *******************\n");
//    printf("       ***************\n");
//    printf("         ***********\n");
//    printf("           *******\n");
//    printf("             ***\n");
//    printf("              * \n");
//	return 0; 
//}		
//二分查找法
//#include <string.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int search = 0;
//	//int a = strlen(arr);
//	int a = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
//	int right = 0;
//	int left = 0;
//	printf("请输入需查找的数字:> ");
//	scanf("%d", &search);
//	right = a;
//	while (right >= left )
//	{
//		mid = (right + left) / 2;
//		if (search > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (search < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (search == arr[mid])
//		{
//			printf("所查找数字%d的下标是%d", arr[mid], mid);
//			break;
//		}
//	}
//	if (right < left )
//	{
//		printf("没找到");
//	}
//	return 0;
//}
 






//int main()
//{
//	int i = 0;
//	for(i = 0; i < 10; i++)
//	{	
//		if (i = 5)
//			printf("%d", i);
//	}
//
//
//	return 0;
//}
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;//局部静态变量,连续计算中不会初始化值
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//		printf("% d", sum(a));
//
//	return 0;
//}
//int main() {
//
//	printf("Hello World\n");
//
//	return 0;
// }