#pragma once
#include <iostream>
#include <string>

using namespace std;

class Fruit
{
public:
	Fruit() { cout << "과일 생성자" << endl; }
	virtual~Fruit() { cout << "과일 파괴자" << endl; }
	virtual void name() { cout << "과일" << endl; }
};

class Apple : public Fruit
{
public:
	Apple() { cout << "사과 생성자" << endl; }
	virtual~Apple() { cout << "사과 파괴자" << endl; }
	virtual void name() { cout << "사과" << endl; }
};

class Banana : public Fruit
{
public:
	Banana() { cout << "바나나 생성자" << endl; }
	virtual~Banana() { cout << "바나나 파괴자" << endl; }
	virtual void name() { cout << "바나나" << endl; }
};

