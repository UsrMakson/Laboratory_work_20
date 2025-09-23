#include "Human.h"

using namespace std;

Human::Human(const std::string Name, int height)
{
}
void Human::print() const
{
    cout << Name << ", рост: " << height << endl;
}
void Human::clear()
{
    Human::Name = "";
    Human::height = 0;
}
std::string Human::Get_Name() const
{ 
    return Name; 
}
int Human::Get_Height() const
{ 
    return height; 
}
void Human::Set_Name(std::string name)
{ 
    Name = name; 
}
void Human::Set_Height(int Height)
{ 
    height = Height; 
}