#pragma once
#include <iostream>
#include <string>

using namespace std;

class Fruit
{
public:
	Fruit() { cout << "���� ������" << endl; }
	virtual~Fruit() { cout << "���� �ı���" << endl; }
	virtual void name() { cout << "����" << endl; }
};

class Apple : public Fruit
{
public:
	Apple() { cout << "��� ������" << endl; }
	virtual~Apple() { cout << "��� �ı���" << endl; }
	virtual void name() { cout << "���" << endl; }
};

class Banana : public Fruit
{
public:
	Banana() { cout << "�ٳ��� ������" << endl; }
	virtual~Banana() { cout << "�ٳ��� �ı���" << endl; }
	virtual void name() { cout << "�ٳ���" << endl; }
};

