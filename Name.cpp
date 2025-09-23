#include "Name.h"

using namespace std;

Name::Name(const std::string Second_name, std::string First_name, std::string Father_name) :
    Second_name(Second_name),
    First_name(First_name),
    Father_name(Father_name)
{
}

void Name::print() {
    cout << Second_name << First_name << Father_name << endl;
}

void Name::clear() {
    Name::Second_name = "";
    Name::First_name = "";
    Name::First_name = "";
}