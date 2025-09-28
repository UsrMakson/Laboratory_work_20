#include "Employee.h"

using namespace std;

Employee::Employee(const string& Name, const int Office_Name) :
	Name(Name),
	Office_Name(Office_Name)
{
}
void Employee::print() const
{

}
void Employee::clear()
{
	Employee::Name = "";
	Employee::Office_Name = 0;
}
string Employee::Get_Name() const
{
	return Name;
}
int Employee::Get_Office() const
{
	return Office_Name;
}
void Employee::Set_Name(const string name)
{
	Name = name;
}
void Employee::Set_Office(const int Office_Name)
{
	Office_Name = Office_Name;
}