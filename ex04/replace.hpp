#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

class Replacer
{
private:
public:
    char *fileName;
    std::string oldStr;
    std::string newStr;
    std::string content_file;
    Replacer(char *file_name);
    ~Replacer();
};

std::string get_content_of_file(char *fileName);
int print_error(int i, std::string error);
bool validate_args(std::string s1, std::string s2);
int my_replace(std::string s1, std::string s2, std::string fileName, std::ifstream &file);
std::string get_newName(std::string str);
#endif