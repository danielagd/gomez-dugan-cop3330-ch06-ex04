#include "header.h"

int inVector(vector<Name_value> vec, Name_value person, int size)
{
    for (int i = 0; i < size; i++)
        if (vec.at(i).name == person.name && vec.at(i).value == person.value)
            return 1;
    return 0;
}

int main() {
    vector<Name_value> names;

    int flag = 1;
    string tempName;
    int tempValue;

    while (flag)
    {
        cout << "Please enter name and value separated by a space. If you wish to finish, enter NoName 0.\n";
        cin >> tempName >> tempValue;
        if (tempName == "NoName" && tempValue == 0)
        {
            flag = 0;
            break;
        }
        Name_value person;
        person.name = tempName;
        person.value = tempValue;
        if (inVector(names, person, names.size()))
            cout << "Whoops! That person is in the system already.";
        else
            names.push_back(person);
    }

    for (int i = 0; i < names.size(); i++)
        cout << "(" << names.at(i).name << ", " << names.at(i).value << ")\n";
}