#include <iostream>
#include <ostream>
#include <string>








int main()
{
	std::string str;
	str =  "HI THIS IS BRAIN";

	std::cout << str << std::endl;
	std::string *strPTR = &str;
	std::string &strREF = str;

	std::cout << "--------------" << std::endl;

	std::cout << &str << std::endl;
	std::cout << strPTR << std::endl;
	std::cout << &strREF << std::endl;

	std::cout << "--------------" << std::endl;

	std::cout << str << std::endl;
	std::cout << *strPTR << std::endl;
	std::cout << strREF << std::endl;

}
