#include "Employee.h"

using namespace std;

Employee::Employee(const std::string& Name, const Office& Office_Name):
	Name(Name),
	Office_Name(Office_Name)
{
}
string Employee::Get_Boss_Name() const
{
	return Office_Name.Get_Boss_Name();
}
void Employee::Set_Boss_Name(const std::string Boss_name)
{
	Office_Name.Set_Boss_Name(Boss_name);
}

void Employee::print() const
{
	if (Get_Boss_Name() == Name)
	{
		cout << Name << " начальник отдела " << Office_Name.Get_Office_Name() << endl;
	}
	else
	{
		cout << Name << " работает в отделе " << Office_Name.Get_Office_Name()
			<< ", начальник которого " << Office_Name.Get_Boss_Name() << endl;
	}
}
void Employee::clear()
{
	Employee::Name = "";
	Employee::Office_Name.Set_Office_Name("");
}
string Employee::Get_Name() const
{
	return Name;
}
Office Employee::Get_Office() const
{
	return Office_Name;
}
std::string Employee::Get_Office_Name() const
{
	return Office_Name.Get_Office_Name();
}
void Employee::Set_Name(const string name)
{
	Name = name;
}
void Employee::Set_Office(const string Office_name)
{
	Office_Name.Set_Office_Name(Office_name);
}