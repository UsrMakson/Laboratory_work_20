#pragma once
#include <iostream>
#include <vector>
#include <string>

class Employee
{
private:
	std::string Name;
	int Office;
public:
	Employee(const std::string& Name,const int Office);
	void print() const;
	void clear();
	std::string Get_Name() const;
	int Get_Office() const;
	void Set_Name(const std::string name);
	void Set_Office(const int office);
};
