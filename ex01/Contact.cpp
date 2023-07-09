#include "Contact.hpp"
#include "book.hpp"

void  Contact::setFirstName(std::string fName)
{
  this->m_fname = fName;
}
void  Contact::setLastName(std::string lName)
{
  this->m_lname = lName;
}
void  Contact::setNickName(std::string nickName)
{
  this->m_nick = nickName;
}
void  Contact::setPhone(std::string phone)
{
  this->m_phone = phone;
}
void  Contact::setSecret(std::string secret)
{
  this->m_secret = secret;
}

std::string Contact::getFirstName()
{
  return this->m_fname;
}

std::string Contact::getLastName()
{
  return this->m_lname;
}

std::string Contact::getNickName()
{
  return this->m_nick;
}

std::string Contact::getPhone()
{
  return this->m_phone;
}

std::string Contact::getSecret()
{
  return this->m_secret;
}
