#include <iostream>
#include <vector>
#include <string>

class Human
{
private:
	std::string Name;
	int height;
public:
	Human(const std::string Name, int height);
	void print();
	void clear();
};
