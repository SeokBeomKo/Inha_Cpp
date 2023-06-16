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
//	Q1. �ﰢ���� 3���� �� (x1,y1), (x2,y2), (x3,y3) ��
//	�˰� ���� �� �� �ﰢ���� ������ ���ϴ� ���α׷��� �ۼ��϶�
//
//	ex ) �� �� �Է� : (1.5 -3.4) (4.6 5) (9.5 -3.4)
//	�ﰢ���� ���� : 33.6
//	
//	�Ź߲� ����
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
//	Q2. ���ӿ��� ��й�ȣ�� � ��Ģ�� �䱸�ϴ� ��찡 �ִ�.
//	������ ���� ��й�ȣ�� ������ �Ѵٰ� ����
//	1. ��й�ȣ�� ��� 8���� ���ڿ��� �Ѵ�.
//	2. ��й�ȣ�� ���ڿ� ���ڷθ� �����Ǿ�� �Ѵ�.
//	3. ��й�ȣ�� ��� �ΰ��� ���ڰ� ���ԵǾ�� �Ѵ�.
//	����ڰ� ��й�ȣ�� �Է����� ��,
//	�� ��Ģ�� ������ valid password
//	�׷��� ������ invalid password ���
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
//		// �ּ� 8��
//		if (pass_lenth < 8)	check_lenth++;
//
//		for (int i = 0; i < pass_lenth; i++)
//		{
//			// ���ڿ� ���ڷθ�
//			if (!isalnum(password[i]))	check_alph++;
//			// �ּ� 2�� ����
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
//	cout << "���� ���� �� �հ� : " << sum << endl;
//	sum = sum_arr(cookies, cookies + 3);
//	cout << "ó�� �� ����� ����" << sum << "���� �Ծ����ϴ�." << endl;
//	sum = sum_arr(cookies + 4, cookies + 8);
//	cout << "������ �� ����� ����" << sum << "���� �Ծ����ϴ�." << endl;*/
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
//	cout << mmm << "���� m ��" << ms << " �� ����ֽ��ϴ�" << endl;
//	cout << wail << "���� u ��" << us << " �� ����ֽ��ϴ�" << endl;*/
//
//	/*
//	p426
//	*/
//	/*rect rplace;
//	polar pplace;
//
//	cout << "x ��, y�� �Է� : ";
//	while (cin >> rplace.x >> rplace.y)
//	{
//		pplace = rect_to_polar(rplace);
//		show_polar(pplace);
//		cout << "x ��, y�� �Է�(�������� q �Է�) : ";
//	}
//	cout << "����" << endl;*/
//
//	/*// ���� ���� ���� (divide - and - conquer)
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
//	�Լ������͸� ������ �迭 p451
//	*/
//	/*double av[3] = { 1112.3,1542.6,227.9 };
//
//	const double* (*p1)(const double*, int) = f1;
//	auto p2 = f2;
//
//	cout << "�Լ� ������ :\n " ;
//	cout << "�ּ� ��\n ";
//	cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
//	cout << p2(av, 3) << ": " << *p2(av, 3) << endl;
//
//	const double* (*pa[3])(const double*, int) = { f1, f2, f3 };
//	auto pb = pa;
//
//	cout << "\n�Լ� �����͸� ���ҷ� ������ �迭 : \n";
//	cout << "�ּ� �� \n";
//	for (int i = 0; i < 3; i++)
//	{
//		cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
//	}
//
//	cout << "\n�Լ� �����͸� ����Ű�� ������ : \n";
//	cout << "�ּ� �� \n";
//	for (int i = 0; i < 3; i++)
//	{
//		cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;
//	}
//
//	cout << "\n�Լ� �����͸� ���ҷ� ������ �迭�� ����Ű�� ������ : \n" ;
//	cout << "�ּ� �� \n ";
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
//	cout << " �Ÿ� = " << dapos.distance;
//	cout << ", ���� = " << dapos.angle * Rad_to_deg << " ��" << endl;
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
