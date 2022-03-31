#include "replace.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
        return (print_error(1, "Usage: ./sed fileName s1 s2"));
    std::string s1(av[2]);
    std::string s2(av[3]);
    std::string fileName(av[1]);
    std::ifstream file(fileName.c_str());
    if (validate_args(s1, s2,fileName, file))
        return my_replace(s1, s2, fileName, file);
    else
        return 1;
}
