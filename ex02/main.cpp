#include <string.h>
#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *str_PTR = &str;
    std::string &str_REF = str;

    std::cout << "address of string: " << &str << std::endl;
    std::cout << "address held by str_PTR: " << str_PTR << std::endl;
    std::cout << "address held by str_REF: " << &str_REF << std::endl;

    std::cout << std::endl;

    std::cout << "value of string: " << str << std::endl;
    std::cout << "value pointed to by str_PTR: " << *str_PTR << std::endl;
    std::cout << "value pointed to by str_REF: " << str_REF << std::endl;

}