/*#include <fstream>
#include "TwoCppFiles.h"
#include <string>
#include <iostream>
using namespace std;

void LoadRom(std::string fileName, int *arr[]) 
{
	ifstream infile;
	infile.open(fileName, ios::binary | ios::in);
	if (!infile) {
		cout << "Error: Can't open the file named: " << fileName << endl;
		system("PAUSE");
	}
	
	for (int i = 0; i < 65536; ++i) {
		
	}
}*/