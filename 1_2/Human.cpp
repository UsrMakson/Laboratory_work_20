#include "Human.h"

using namespace std;

Human::Human(const std::string Name, int height):
    Name(Name),
    height(height)
{
}

void Human::print(){
    cout << Name << ", ����: " << height << endl;
}

void Human::clear(){
    Human::Name = "";
    Human::height = 0;
}