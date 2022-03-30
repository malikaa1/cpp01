#include "replace.hpp"

Replacer::Replacer(char *fileName)
{
    this->fileName = fileName;
}

Replacer::~Replacer()
{
    return;
}

int print_error(int i, std::string error)
{
    std::cout << "Error: " << error << std::endl;
    return i;
}

std::string get_newName(std::string str)
{
    for (int i = 0; str[i] != '\0'; i++)
        str[i] = toupper(str[i]);
    str.append(".replace");
    return str;
}

bool validate_args(std::string s1, std::string s2)
{
    if (s1.empty() || s2.empty())
    {
        print_error(1, "args must not be empty");
        return false;
    }
    // if (!file.is_open())
    // {
    //     print_error(1, "cat not open file");
    //     return false;
    // }
    return true;
}

int my_replace(std::string s1, std::string s2, std::string fileName, std::ifstream &file)
{
    size_t pos;
    std::string newName = get_newName(fileName);
    std::ofstream newFile(newName);
    for (std::string line; std::getline(file, line);)
    {
        pos = line.find(s1);
        if (pos != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos = pos + s2.length();
        }
        pos = 0;
        newFile << line << std::endl;
    }
    file.close();
    newFile.close();
    return 0;
}
