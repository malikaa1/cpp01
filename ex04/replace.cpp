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

std::string get_content_of_file(char *file_name)
{
    std::ifstream file(file_name);
    std::string str;
    std::string word;

    if (file.is_open())
    {
        while (file >> str)
        {
            word = word + str;
        }
        std::cout << word << std::endl;
        file.close();
    }
    else
    {
        std::cout << "Error: file did not open" << std::endl;
    }
    return word;
}

bool validate_args(std::string s1, std::string s2, std::ifstream &file)
{
    if (s1.empty() || s2.empty())
    {
        print_error(1, "args must not be empty");
        return false;
    }
    if (!file.is_open())
    {
        print_error(1, "cat not open file");
        return false;
    }
    return true;
}
int my_replace(std::string s1, std::string s2, std::ifstream &file, std::string fileName)
{
    size_t pos;

    fileName.append(".replace");
    std::ofstream newFile(fileName);
    std::cout << fileName << std::endl;
    for (std::string line; std::getline(file, line);)
    {
        s2 = "lol";
        std::cout << fileName << std::endl;
        pos = line.find(s1);
        if (pos != std::string::npos)
        {
            std::cout << line << std::endl;
        }
    }
    return 0;
}