# ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

#include <sstream>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"
#include "book.hpp"

class PhoneBook
{
    private: 
        Contact m_contacts[8];
        int     m_index;
        int     m_size;
        int     getInfo(std::string data[5]);
        void    print_info(int num);
        void    setInfo(std::string data[5]);
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void    add();
        void    search(void);
        std::string readInput(std::string input);

};

#endif