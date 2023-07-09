#include "PhoneBook.hpp"
#include "book.hpp"

PhoneBook::PhoneBook()
{
    std::cout << "Contstructor" << std::endl;
}

PhoneBook::~PhoneBook()
{
    std::cout << "Destructor" << std::endl;
}

std::string    PhoneBook::readInput(std::string input)
{
  std::string info;

  while(1)
  {
      std::cout << input;
      if (!getline(std::cin, info))
          std::exit(0);
      if (info.length() == 0)
          continue;
      else
          break;
  }
  return info;
}

int PhoneBook::getInfo(std::string data[5])
{
    std::string tmp;
    data[0] = readInput("First Name ");
    if (myIsAlpha(data[0]) == true)
    {
        std::cout << "error setting first name" << std::endl;
        return 1 ;
    }
    data[1] = readInput("Last Name ");
    if (myIsAlpha(data[1]) == true)
    {
        std::cout << "error setting last name" << std::endl;
        return 1;
    }
    data[2] = readInput("Nick Name ");
    data[3] = readInput("Phone ");
    if(isNumber(data[3]) == true)
    { 
        std::cout << "error setting phone number" << std::endl;
        return 1;
    }
    data[4] = readInput("Darkest Secret ");
    return 0;
}

void PhoneBook::setInfo(std::string data[5])
{
    this->m_contacts[m_index].setFirstName(data[0]);
    this->m_contacts[m_index].setLastName(data[1]);
    this->m_contacts[m_index].setNickName(data[2]);
    this->m_contacts[m_index].setPhone(data[3]);
    this->m_contacts[m_index].setSecret(data[4]);
    this->m_index++;
    if (this->m_index >= 8)
        this->m_index = 0;
    if (m_size < 8)
        this->m_size++;
}
void PhoneBook::add()
{
    std::string data[5];

    if (this->getInfo(data))
        return ;
    this->setInfo(data);
}

void PhoneBook::search()
{
    std::string info;
    std::stringstream str;
    int               num;

    std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	for (int i = 0; i < m_size; i++)
	{
		std::cout << std::setw(10) << i << "|";
        if (myIsAlpha(this->m_contacts[i].getFirstName()) == true)
            break;
		std::cout << std::setw(10) << my_resize(this->m_contacts[i].getFirstName()) << "|";
        if (myIsAlpha(this->m_contacts[i].getFirstName()) == true)
            break;
		std::cout << std::setw(10) << my_resize(this->m_contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << my_resize(this->m_contacts[i].getNickName()) << std::endl;
	}
    
    std::cout << "Please enter an Index" << std::endl;
    getline(std::cin, info);
    str << info;
    str >> num;
    if  (info == "")
        return ;
    if (isNumber(info) == true || !(num >= 0 && num < 8))
    {
        std::cout << "ERROR" << std::endl;
        return ;
    }
    this->print_info(num);
}

void PhoneBook::print_info(int num)
{
  std::cout << "First Name:     " << this->m_contacts[num].getFirstName() << std::endl;
  std::cout << "Last Name:      " << m_contacts[num].getLastName() << std::endl;
  std::cout << "Nick Name:      " << m_contacts[num].getNickName() << std::endl;
  std::cout << "Phone Number:   " << m_contacts[num].getPhone() << std::endl;
  std::cout << "Darkest Secret: " << m_contacts[num].getSecret() <<std::endl;
}