#include "Employee.h"

using namespace std;

Employee::Employee(const string& Name, const int Office) :
	Name(Name),
	Office(Office)
{
}
void Employee::print() const
{

}
void Employee::clear()
{
	Employee::Name = "";
	Employee::Office = 0;
}
string Employee::Get_Name() const
{
	return Name;
}
int Employee::Get_Office() const
{
	return Office;
}
void Employee::Set_Name(const string name)
{
	Name = name;
}
void Employee::Set_Office(const int office)
{
	Office = office;
}