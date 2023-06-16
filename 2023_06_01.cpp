//#include <iostream>
//#include <cstring>
//#include <vector>
//
//using namespace std;
//
//struct polar
//{
//	double distance;
//	double angle;
//};
//struct rect
//{
//	double x;
//	double y;
//};
//
//const int ArSize = 8;
//int sum_arr(const int* begin, const int * end);
//
//unsigned int c_in_str(const char* str, char ch);
//
//polar rect_to_polar(rect xypos);
//void show_polar(polar dapos);
//
//const int Len = 66;
//const int Divs = 6;
//void subdivide(char ar[], int low, int high, int level);
//
//const double* f1(const double ar[], int n);
//const double* f2(const double [], int);
//const double* f3(const double *, int);
//
//double add(double a, double b)
//{
//	return a + b;
//}
//
//double sub(double a, double b)
//{
//	return a - b;
//}
//
//double calculate(double a, double b, double(*pf)(double, double))
//{
//	return pf(a, b);
//}
//
//int main()
//{
//
//	cout << calculate(3, 4, add) << endl;
//	cout << calculate(10, 5.5, sub) << endl;
//
//	/*
//	Q1. 삼각형의 3개의 점 (x1,y1), (x2,y2), (x3,y3) 를
//	알고 있을 때 이 삼각형의 면적을 구하는 프로그램을 작성하라
//
//	ex ) 세 점 입력 : (1.5 -3.4) (4.6 5) (9.5 -3.4)
//	삼각형의 면적 : 33.6
//	
//	신발끈 공식
//	*/
//	/*double x1 = 1.5, x2 = 4.6, x3 = 9.5;
//	double y1 = -3.4, y2 = 5, y3 = -3.4;
//
//	double temp = (x1 * y2 + x2 * y3 + x3 * y1) - (x2 * y1 + x3 * y2 + x1 * y3);
//	temp = temp / 2;
//	temp = abs(temp);
//
//	cout << temp << endl;*/
//
//	/*
//	Q2. 게임에서 비밀번호에 어떤 법칙을 요구하는 경우가 있다.
//	다음과 같이 비밀번호를 만들어야 한다고 하자
//	1. 비밀번호는 적어도 8개의 문자여야 한다.
//	2. 비밀번호는 문자와 숫자로만 구성되어야 한다.
//	3. 비밀번호는 적어도 두개의 숫자가 포함되어야 한다.
//	사용자가 비밀번호를 입력했을 때,
//	위 법칙에 맞으면 valid password
//	그렇지 않으면 invalid password 출력
//	*/
//	/*string password;
//	int check_num = 0;
//
//	int check_lenth = 0;
//	int check_alph = 0;
//	while (true)
//	{
//		check_num = 0, check_lenth = 0, check_alph = 0;
//		cin >> password;
//
//		int pass_lenth = password.length();
//		// 최소 8개
//		if (pass_lenth < 8)	check_lenth++;
//
//		for (int i = 0; i < pass_lenth; i++)
//		{
//			// 문자와 숫자로만
//			if (!isalnum(password[i]))	check_alph++;
//			// 최소 2개 숫자
//			if (isdigit(password[i])) check_num++;
//		}
//
//		if (check_lenth == 0 && check_alph == 0 && check_num >= 2)
//		{
//			cout << "Valid password" << endl;
//			break;
//		}
//		else
//		{
//			cout << "Invalid password" << endl;
//		}
//	}*/
//	
//	/*
//	p406
//	*/
//	/*int cookies[ArSize] = { 1,2,4,8,16,32,64,128 };
//
//	int sum = sum_arr(cookies, cookies + ArSize);
//	cout << "먹은 과자 수 합계 : " << sum << endl;
//	sum = sum_arr(cookies, cookies + 3);
//	cout << "처음 세 사람은 과자" << sum << "개를 먹었습니다." << endl;
//	sum = sum_arr(cookies + 4, cookies + 8);
//	cout << "마지막 네 사람은 과자" << sum << "개를 먹었습니다." << endl;*/
//
//	/*
//	p416
//	*/
//	/*char mmm[15] = "minimum";
//
//	const char *wail = "ululate";
//
//	unsigned int ms = c_in_str(mmm, 'm');
//	unsigned int us = c_in_str(wail, 'u');
//	cout << mmm << "에는 m 이" << ms << " 개 들어있습니다" << endl;
//	cout << wail << "에는 u 가" << us << " 개 들어있습니다" << endl;*/
//
//	/*
//	p426
//	*/
//	/*rect rplace;
//	polar pplace;
//
//	cout << "x 값, y값 입력 : ";
//	while (cin >> rplace.x >> rplace.y)
//	{
//		pplace = rect_to_polar(rplace);
//		show_polar(pplace);
//		cout << "x 값, y값 입력(끝내려면 q 입력) : ";
//	}
//	cout << "종료" << endl;*/
//
//	/*// 분할 정복 전략 (divide - and - conquer)
//	char ruler[Len];
//	int i;
//	for (i = 1; i < Len; i++)
//	{
//		ruler[i] = ' ';
//	}
//	ruler[Len - 1] = '\0';
//	int max = Len - 2;
//	int min = 0;
//	ruler[min] = ruler[max] = 'I';
//	cout << ruler << endl;
//	for (i = 1; i <= Divs; i++)
//	{
//		subdivide(ruler, min, max, i);
//		cout << ruler << endl;
//		for (int j = 1; j < Len - 2; j++)
//		{
//			ruler[j] = ' ';
//		}
//	}*/
//
//	/*
//	함수포인터를 가지는 배열 p451
//	*/
//	/*double av[3] = { 1112.3,1542.6,227.9 };
//
//	const double* (*p1)(const double*, int) = f1;
//	auto p2 = f2;
//
//	cout << "함수 포인터 :\n " ;
//	cout << "주소 값\n ";
//	cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
//	cout << p2(av, 3) << ": " << *p2(av, 3) << endl;
//
//	const double* (*pa[3])(const double*, int) = { f1, f2, f3 };
//	auto pb = pa;
//
//	cout << "\n함수 포인터를 원소로 가지는 배열 : \n";
//	cout << "주소 값 \n";
//	for (int i = 0; i < 3; i++)
//	{
//		cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
//	}
//
//	cout << "\n함수 포인터를 가리키는 포인터 : \n";
//	cout << "주소 값 \n";
//	for (int i = 0; i < 3; i++)
//	{
//		cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;
//	}
//
//	cout << "\n함수 포인터를 원소로 가지는 배열을 가리키는 포인터 : \n" ;
//	cout << "주소 값 \n ";
//
//	auto pc = &pa;
//
//	cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
//
//	const double* (*(*pd)[3])(const double*, int) = &pa;
//
//	const double* pdb = (*pd)[1](av, 3);
//	cout << pdb << ": " << *pdb << endl;
//
//	cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << endl;*/
//
//	return 0;
//}
//
//int sum_arr(const int* begin, const int* end)
//{
//	const int* pt;
//	int total = 0;
//
//	for (pt = begin; pt != end; pt++)
//	{
//		total = total + *pt;
//	}
//	return total;
//}
//unsigned int c_in_str(const char* str, char ch)
//{
//	int count = 0;
//
//	while (*str)
//	{
//		if (*str == ch)
//			count++;
//		str++;
//	}
//	return count;
//}
//
//polar rect_to_polar(rect xypos)
//{
//	polar answer;
//
//	answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
//	answer.angle = atan2(xypos.y, xypos.x);
//
//	return answer;
//}
//
//void show_polar(polar dapos)
//{
//	const double Rad_to_deg = 57.29577951;
//	cout << " 거리 = " << dapos.distance;
//	cout << ", 각도 = " << dapos.angle * Rad_to_deg << " 도" << endl;
//
//}
//
//void subdivide(char ar[], int low, int high, int level)
//{
//	if (level == 0)	return;
//	int mid = (high + low) / 2;
//	ar[mid] = 'I';
//	subdivide(ar, low, mid, level - 1);
//	subdivide(ar, mid, high, level - 1);
//}
//
//const double* f1(const double ar[], int n)
//{
//	return ar;
//}
//
//const double* f2(const double ar[], int n)
//{
//	return ar+1;
//}
//
//const double* f3(const double ar[], int n)
//{
//	return ar+2;
//}
