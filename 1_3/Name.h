#include <iostream>
#include <vector>
#include <string>

class Name
{
private:
	std::string Second_name;
	std::string First_name;
	std::string Father_name;
public:
	Name(const std::string Second_name, std::string First_name, std::string Father_name);
	void print();
	void clear();
};
