
#include "windows.h"
#include "stdio.h"
#include "Multiprotoclserver.h"


int main()
{
	CMultiProtoclServer mps;
	mps.InitServer();
	mps.StartWork();
	mps.EndWork();
	return 0;

}
