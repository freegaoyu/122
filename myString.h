#define _CRT_SECURE_NO_WARNINGS

#pragma once
#include <iostream>
using namespace std;
class myString
{
private:
	char* str;
	int len;
	static int num_strings;
	static const int CINLIM = 80;
public:
	myString(const char* s);
	myString();
	myString(const myString&);
	~myString();
	int lenght()const { return len; };
	//overload operator methods

	myString& operator=(const myString&);
	myString& operator=(const char*s);
	char& operator[](int i);
	const char& operator[](int i)const;
	//overload operator friends
	friend bool operator<(const myString& st1, const myString& st2);
	friend bool operator>(const myString& st1, const myString& st2);
	friend bool operator==(const myString& st1, const myString& st2);
	friend ostream& operator<<(ostream& os, const myString& st);
	friend istream& operator>>(istream& is, myString& st);
	//static funcation
	static int HowMany();


};

