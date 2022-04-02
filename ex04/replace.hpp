#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>


int print_error(int i, std::string error);
bool validate_args(std::string s1, std::string s2,std::string fileName, std::ifstream &file);
int my_replace(std::string s1, std::string s2, std::string fileName, std::ifstream &file);
std::string get_newName(std::string str);
#endif