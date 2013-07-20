// ulib.h

#pragma once
#include <tchar.h>
#include <string>
using std::string;
using std::wstring;
using namespace System;

namespace ulib {

	public ref class ulib1
	{
		// TODO: Add your methods for this class here.
	public:
		const char* getString(int& n);
		string noFoo();
		int getInt();
		char getChar();
	};
}
