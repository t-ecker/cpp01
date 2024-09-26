#include "Harl.h"

enum    Options
{
    DEBUG, INFO, WARNING, ERROR
};

bool    check_input(int argc, char **argv, std::string *options)
{
    bool flag = false;
    if (argc != 2)
        return (false);
    for (int i = 0; i < 4; i++)
    {
        if (options[i] == argv[1])
            flag = true;
    }
    if (!flag)
    {
        std::cout << "Wrong type of Argument\nUse one of: DEBUG, INFO, WARNING, ERROR" << std::endl;
        return (false);
    }
    return (true);
}

int get_int(char *str, std::string *options)
{
    for (int i = 0; i < 4; i++)
    {
        if (options[i] == str)
            return (i);
    }
    return (-1);
}

int main(int argc, char **argv)
{
    Harl    p1;
    std::string options[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    if (!check_input(argc, argv, options))
        return (1);
    switch (get_int(argv[1], options))
    {
        case DEBUG:
            p1.complain("DEBUG");
        case INFO:
            p1.complain("INFO");
        case WARNING:
            p1.complain("WARNING");
        case ERROR:
            p1.complain("ERROR");
            break;
        default:
            std::cout << "Unknown argument passed" << std::endl;
            return 1;
    }
    return (0);
}