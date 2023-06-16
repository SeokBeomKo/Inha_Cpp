//#include <iostream>
//#include <cstring>
//#include <vector>
//
//using namespace std;
//
//template<typename Any>
//Any add(Any a, Any b)
//{
//	return a + b;
//}
//
//template<typename T>
//void Swap(T& a, T& b);
//template<typename T>
//void Swap(T& a, T& b, int n);
//void Show(int a[]);
//const int Lim = 8;
//
//struct job
//{
//	char name[40];
//	double salary;
//	int floor;
//};
//template <>
//void Swap<job>(job& j1, job& j2);
//void Show(job& j);
//
//int main()
//{
//	/*
//	Q1. 점 xy 를 입력받아 그 점이 x0,y0 을 중심으로 하고
//	반지름 r 인 원의 내부에 존재하는지 검사하는 프로그램
//	ex )	input > r : 10 x0 = 0, y0 = 0, x = 4, y = 5
//			output > 점 4,5 는 중점이 0,0 이고 잔지름이 10 인
//			원 안에 있습니다.
//	*/
//
//	/*
//	Q2. 
//	*/
//
//	/*
//	함수 템플릿
//	*/
//	/*
//	cout << add(4, 5) << endl;
//	*/
//
//	/*
//	템플릿의 오버로딩
//	*/
//	/*int i = 10, j = 20;
//	cout << "i, j = " << i << ", " << j << ".\n";
//	cout << "컴파일러가 생성한 int 형 교환기를 사용하면\n";
//	Swap(i, j);
//	cout << "이제 i, j = " << i << ", " << j << ".\n";
//
//	int d1[Lim] = { 0,7,0,4,1,7,7,6 };
//	int d2[Lim] = { 0,6,2,0,1,9,6,9 };
//	cout << "원본배열 :\n";
//	Show(d1);
//	Show(d2);
//	Swap(d1,d2,Lim);
//	cout << "교환된 배열 :\n";
//	Show(d1);
//	Show(d2);*/
//
//	/*
//	명시적 특수화
//	*/
//	/*cout.precision(2);
//	cout.setf(ios::fixed, ios::floatfield);
//	job sue = { "Susan Yaffee", 73000.60, 7 };
//	job sidney = { "Sidney Taffee", 78060.72, 9 };
//	cout << "job 교환 전 :\n";
//	Show(sue);
//	Show(sidney);
//	Swap(sue,sidney);
//	cout << "job 교환 후 :\n";
//	Show(sue);
//	Show(sidney);*/
//
//
//
//	return 0;
//}
//
//template<typename T>
//void Swap(T& a, T& b)
//{
//	T temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//template<typename T>
//void Swap(T& a, T& b, int n)
//{
//	T temp;
//	for (int i = 0; i < n; i++)
//	{
//		temp[i] = a[i];
//		a[i] = b[i];
//		b[i] = temp[i];
//	}
//}
//template<>
//void Swap(job& j1, job& j2)
//{
//	double t1;
//	int t2;
//	t1 = j1.salary;
//	j1.salary = j2.salary;
//	j2.salary = t1;
//	t2 = j1.floor;
//	j1.floor = j2.floor;
//	j2.floor = t2;
//}
//void Show(int a[])
//{
//	cout << a[0] << a[1] << "/";
//	cout << a[2] << a[3] << "/";
//	for (int i = 4; i < Lim; i++)
//	{
//		cout << a[i];
//	}
//	cout << endl;
//}
//
//void Show(job& j)
//{
//	cout << j.name << ": (" << j.floor << "층에 거주) " << "$" << j.salary << endl;
//}
