#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
public:
		Zombie(); 
		Zombie(const std::string& name);  // Constructor that takes a name

		Zombie* 	newZombie(std::string name); // Returns alloced new zombie with name
		void		announce(void);
		void		changeName(std::string name);

		~Zombie();
private:
		std::string name;
};

#endif