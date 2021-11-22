#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character: public ICharacter {
	private:
		std::string name;
		AMateria *materias[4];
		int i;
	public:
		Character();
		Character(std::string name);
		Character(const Character & copy);
		~Character();

		Character& operator = (const Character & obj);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif