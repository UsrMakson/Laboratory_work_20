#include <iostream>
#include <string>

class Human
{
private:
	std::string Name;
	int height;
public:
	Human(const std::string Name, int height);
	void print() const;
	void clear();
	std::string Get_Name() const;
	int Get_Height() const;
	void Set_Name(std::string name);
	void Set_Height(int Height);
};
