#include "Character.hpp"

Character::Character() : name("default") {
    for (int i = 0; i < 4; i++)
        this->materias[i] = NULL;
}

Character::~Character() {

}

Character::Character( std::string _name ) : name(_name) {
    for (int i = 0; i < 4; i++)
        this->materias[i] = NULL;
}

Character::Character( const Character & src ) {
    *this = src;
}

Character & Character::operator= ( const Character & src ) {
    this->name = src.name;
    return *this;
}

std::string const & Character::getName() const {
    return this->name;
}

void Character::equip(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (!this->materias[i]) {
            this->materias[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4)
        this->materias[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < 4)
        if (this->materias[idx])
            this->materias[idx]->use(target);
}