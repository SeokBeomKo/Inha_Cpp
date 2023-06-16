#pragma once
#include <iostream>
#ifndef STRGBAD__H__
#define STRGBAD__H__

class StringBad
{
private:
	char* str;
	int len;
	static int num_strings;
public:
	StringBad(const char *s);
	StringBad();
	~StringBad();

	friend std::ostream& operator<<(std::ostream& os,
		const StringBad& st);

};

#endif