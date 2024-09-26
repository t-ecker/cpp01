#include "Harl.h"

bool    check_input(int argc, char **argv)
{
    bool flag = 0;
    if (argc != 2)
        return (false);
    std::string options[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (options[i] == argv[1])
            flag = 1;
    }
    if (!flag)
    {
        std::cout << "Wrong type of Argument\nUse one of: DEBUG, INFO, WARNING, ERROR" << std::endl;
        return (false);
    }
    return (true);
}

int main(int argc, char **argv)
{

    if (!check_input(argc, argv))
        return (1);
    Harl    p1;
    p1.complain(argv[1]);
    return (0);
}