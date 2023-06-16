#pragma once
#ifndef STRING1__H__
#define STRING1__H__
#include <iostream>

using std::ostream;
using std::istream;

class String1
{
private:
	char* str;
	int len;
	static int num_strings;
	static const int CINLIM = 80;
public:
	String1(const char* s);
	String1();
	String1(const String1& st);
	~String1();
	int length() const;

	String1& operator=(const String1& st);
	String1& operator=(const char* s);
	char& operator[](int i);
	const char& operator[](int i) const;

	friend bool operator<(const String1& st1, const String1& st2);
	friend bool operator>(const String1& st1, const String1& st2);
	friend bool operator==(const String1& st1, const String1& st2);
	friend ostream& operator<<(ostream& os, const String1& st);
	friend istream& operator>>(istream& is, String1& st);

	static int HowMany();
};

#endif // !STRING__H__
