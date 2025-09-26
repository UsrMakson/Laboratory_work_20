#include <iostream>
#include <vector>
#include <string>

class Name
{
private:
	std::string Second_name;
	std::string First_name;
	std::string Patronymic;
public:
	Name(const std::string& second_name, const std::string& first_name, const std::string& patronymic);
	void print() const;
	void clear();
	bool is_Empty() const;
	std::string Get_SecondName() const;
	std::string Get_FirstName() const;
	std::string Get_Patronymic() const;
	void Set_SecondName(const std::string Second_Name);
	void Set_FirstName(const std::string First_Name);
	void Set_Patronymic(const std::string patronymic);
};
