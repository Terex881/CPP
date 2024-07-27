#ifndef CONTACT_HPP
# define CONTACT_HPP


#include <iostream>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;
	public:
		std::string GetFirst();
		std::string GetLast();
		std::string GetNick();
		std::string GetNumber();
		std::string GetSecret();

		void SetFirst(std::string name);
		void SetLast(std::string name);
		void SetNick(std::string name);
		void SetNumber(std::string name);
		void SetSecret(std::string name);
};


#endif
