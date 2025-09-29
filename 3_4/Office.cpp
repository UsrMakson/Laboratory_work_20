#include "Office.h"

using namespace std;

Office::Office(const std::string name, const std::string boss_name) :
	name(name),
	boss_name(boss_name)
{
}
std::string Office::Get_Office_Name() const
{
	return name;
}
std::string Office::Get_Boss_Name() const
{
	return boss_name;
}
void Office::Set_Office_Name(const std::string Office_name)
{
	name = Office_name;
}
void Office::Set_Boss_Name(const std::string Boss_name)
{
	boss_name = Boss_name;
}
