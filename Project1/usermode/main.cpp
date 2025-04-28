#include <Windows.h>
#include <thread>
#include <cstdint>
#include <winternl.h>
#include <iostream>
#include "offsets/offsets.hpp" //hardcoded cs2 offsets

class GetProcessID { // to be moved to its own file/inside the driver{testing out the logic right now}
public:
	DWORD32 ProcessID(const char* processName) {
	
		DWORD32 processId = NULL;
	
		//here we can use process snaper 


	}


};


int main() { return 1; }
