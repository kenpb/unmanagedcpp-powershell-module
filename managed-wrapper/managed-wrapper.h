// managed-wrapper.h

#pragma once

#include "Header.h"
#using <mscorlib.dll>
using namespace System;

public ref class ManagedWrapper
{
public:
	ManagedWrapper()
	{
		n_code = new NativeCode();
		if (!n_code) {
			throw gcnew OutOfMemoryException();
		}
	}
	void Run()
	{
		n_code->Run();
	}
private:
	NativeCode *n_code;
};

