// This is the main DLL file.

#include "stdafx.h"
//#include <system.dll>
#include "ulib.h"
#include <string>
using std::string;
using std::wstring;
#include <tchar.h>
using namespace ulib;

const char* ulib1::getString(int& n)
{
	string s = "ulib";
	n=s.length();
	return s.c_str();
}

string ulib1::noFoo()
{
	string no="none";
	return no;
}

char ulib1::getChar()
{
	return 'a';
}

int ulib1::getInt()
{
	return 2;
}