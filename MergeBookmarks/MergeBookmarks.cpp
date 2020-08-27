// MergeBookmarks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "normalize.h"

using namespace std;

int main(int argc, char** argv)
{
	if (argc == 2)
	{
		Normalize bmf1;
		bmf1.SetFileName(argv[1]);
		bmf1.LoadFile();
		bmf1.CreateNewFileName();
		bmf1.SaveFile();
	}

	return 0;
}

