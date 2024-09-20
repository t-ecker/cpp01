#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include "Zombie.h"

class   Zombie
{
        private:
                std::string _name;
        public:
                void    announce(void);
                void    set_name(std::string name);
                Zombie();
                ~Zombie();
};

#endif
