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
	Employee(const std::string& Name,const Office& Office_Name);
	void print() const;
	void clear();
	std::string Get_Name() const;
	Office Get_Office() const;
	std::string Get_Office_Name() const;
	std::string Get_Boss_Name() const;
	void Set_Name(const std::string name);
	void Set_Office(const std::string Office_name);
	void Set_Boss_Name(const std::string Boss_name);
};
