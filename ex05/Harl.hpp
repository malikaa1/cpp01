#ifndef HARL_CPP
#define HARL_HPP
#include <iostream>
class Harl
{
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    typedef void (Harl::* PtrToFn) (void);

public:
    Harl();
    ~Harl();
    void complain( std::string level );
};
#endif