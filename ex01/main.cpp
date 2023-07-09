#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

bool isNumber(std::string str)
{
    int n = str.size();
    for (int i = 0; i < n; i++)
    {
        if (!std::isdigit(str[i]))
            return (true);
    }
    return (false);
}

std::string my_resize(std::string str)
{
    if (str.size() > 10)
    {
        str.resize(8);
        str.append(".");
    }
    return str;
}

bool    myIsAlpha(std::string str)
{
    int n = str.size();
    for (int i = 0; i < n; i++)
    {
        if (!std::isalpha(str[i]))
            return true;
    }
    return false;
}

int main(void)
{
    std::string command;
    PhoneBook   phonebook;

    while (1)
    {
        if (std::cin.eof())
            break;
        std::cout << "Enter a command ADD, SEARCH or EXIT>";
        getline(std::cin, command);
        if (command == "ADD")
            phonebook.add();
        else if (command == "SEARCH")
        {
            phonebook.search();
        }
        else if (command == "EXIT")
            break;
        else
            continue;
    }
    return 0;
}