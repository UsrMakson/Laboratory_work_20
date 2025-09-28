#pragma once
#include "Office.h"

#include <iostream>
#include <vector>
#include <string>

class Employee
{
private:
	std::string Name;
	Office Office_Name;
public:
	Employee(const std::string& Name,const int Office_Name);
	void print() const;
	void clear();
	std::string Get_Name() const;
	int Get_Office() const;
	void Set_Name(const std::string name);
	void Set_Office(const int Office_Name);
};
