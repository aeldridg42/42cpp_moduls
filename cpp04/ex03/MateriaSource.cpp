#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++)
        this->materias[i] = NULL;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++)
        if (this->materias[i])
            delete this->materias[i];
}

MateriaSource::MateriaSource( const MateriaSource & src ) {
    *this = src;   
}

MateriaSource & MateriaSource::operator= ( const MateriaSource & src ) {
    if (this != &src) {
        for (int i = 0; i < 4; i++) {
            if (this->materias[i]) {
                delete this->materias[i];
                this->materias[i] = src.materias[i]->clone();
            }
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (!this->materias[i]) {
            this->materias[i] = m;
            return ;
        }
    }
    std::cout << "There is no space left for this materia" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (this->materias[i] && this->materias[i]->getType().compare(type))
            return this->materias[i]->clone();
    }
    return NULL;
}