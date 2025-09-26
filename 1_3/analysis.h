#include "Name.h"

#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>

class Analysis
{
public:
	static int get_cin_n();
	static int get_cin_height();
	static int get_file_height();
	static void add_out_of_file(vector<Name>& arr, Name& temp_FIO);
};
