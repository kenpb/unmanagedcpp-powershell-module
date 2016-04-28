#include <iostream>
#define DllExport __declspec( dllexport )

class DllExport NativeCode
{
public:
	NativeCode() {};
	~NativeCode() {};
	void Run();
};
