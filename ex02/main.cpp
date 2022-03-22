#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string &ref = str;
    std::string *ptr = &str;

    std::cout << "The address of the string in memory : " << ptr << std::endl;
    std::cout << "The address stored in ptr           : " << &str << std::endl;
    std::cout << "The address stored in ref           : " << &ref << std::endl;
    std::cout << "The value of str                    : " << str << std::endl;
    std::cout << "The value pointed to ref            : " << *ptr << std::endl;
    std::cout << "The value pointed to ptr            : " << ref << std::endl;
    return 0;
}