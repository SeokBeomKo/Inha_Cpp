//#include <iostream>
//#include <cstring>
//#include <vector>
//
//using namespace std;
//
//struct inflatable
//{
//	int no;
//	string str;
//};
//
//struct CandyBar
//{
//	string name;
//	double weight;
//	int kcal;
//};
//
//char* getname(void);
//
//int main()
//{
//	/*inflatable* pInt;
//	pInt = new inflatable[sizeof(inflatable) * 128];
//
//	pInt->no = 4;
//	if (pInt)
//	{
//		delete[] pInt;
//		pInt = nullptr;
//	}*/
//
//	/*char* name;
//
//	name = getname();
//	cout << (int*)name << " : " << name << "\n";
//	delete[] name;
//
//	name = getname();
//	cout << (int*)name << " : " << name << "\n";
//	delete[] name;*/
//
//	/*
//	배열의 대안 vector
//	*/
//	/*int a;
//	int b;
//
//	vector<int> vi;
//
//	vi.push_back(1);
//	vi.push_back(2);
//
//	cout << vi[0] << endl;
//	cout << vi[1] << endl;*/
//
//	/*
//	Q1, p.232 연습문제 5,6,9
//	*/
//
//	// 5번
//	CandyBar snack = { "Monica Munch", 2.3, 350 };
//	cout << snack.name << snack.weight << snack.kcal << endl;
//
//	// 6번
//	CandyBar snackArr[3];
//	snackArr[0] = { "snackArr1", 2.3, 350 };
//	snackArr[1] = { "snackArr2", 2.3, 350 };
//	snackArr[2] = { "snackArr3", 2.3, 350 };
//
//	for (int i = 0; i < 3; i++)	cout << snackArr[i].name << snackArr[i].weight << snackArr[i].kcal << endl;
//
//	// 9번
//	CandyBar* snackPtr = new CandyBar[3]{ { "snackPtr1",2.1,350 },
//										  { "snackPtr2",2.1,350 },
//										  { "snackPtr3",2.1,350 } };
//
//	for (int i = 0; i < 3; i++)	cout << snackPtr[i].name << snackPtr[i].weight << snackPtr[i].kcal << endl;
//	delete[] snackPtr;
//
//	return 0;
//}
//
//char* getname()
//{
//	char temp[80];
//	cout << "이름을 입력하십시오.";
//	cin >> temp;
//	char* pn = new char[strlen(temp) + 1];
//	strcpy(pn, temp);
//
//	return pn;
//}