#pragma once
#include <iostream>
#include <vector>
#include <string>

class Office
{
private:
	std::string name;
	std::string boss_name;
public:
	Office(const std::string name, const std::string boss_name);
	std::string Get_Office_Name() const;
	std::string Get_Boss_Name() const;
	void Set_Office_Name(const std::string Office_name);
	void Set_Boss_Name(const std::string Boss_name);
};

