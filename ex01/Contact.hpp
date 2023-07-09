#ifndef CONTACT

# define CONTACT

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include "book.hpp"


class Contact
{
    private:
        std::string m_fname;
        std::string m_lname;
        std::string m_nick;
        std::string m_phone;
        std::string m_secret;
    public: 
        std::string getFirstName();
        std::string getLastName();
        std::string getNickName();
        std::string getPhone();
        std::string getSecret();
        void        setFirstName(std::string fName);
        void        setLastName(std::string lName);
        void        setNickName(std::string nickName);
        void        setPhone(std::string phone);
        void        setSecret(std::string secret);
};

#endif