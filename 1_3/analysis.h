#pragma once
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
	static void add_out_of_file(std::vector<Name>& arr, Name& temp_FIO);
};
