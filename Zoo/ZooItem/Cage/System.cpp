#include "System.h"

namespace Zoo {
    System::System(string number, int m_Animal) {
        setNumber(number);
        setMaxAnimal(m_Animal);
    }

    void System::setNumber(string number) {
        this->number = number;
    }

    void System::setMaxAnimal(int m_Animal) {
        if(m_Animal >= 0 && v_animal.size() <= m_Animal)
            this->m_Animal = m_Animal;
        else   
            this->m_Animal = 0;
    }

    void System::pushAnimal(Animal* animal) {
        if(v_animal.size() != 0) { 
            if(animal->getisPredator() == true && v_animal[0]->getisPredator() == false) 
                throw new PredatorException();            
        }

        if(v_animal.size() + 1 <= m_Animal){
            v_animal.push_back(animal);
        } else {
            throw new MaxCapacityException();
        }
    }

    void System::repushAnimal(Animal* oldAnimal, Animal* newAnimal) {
        vector<Animal*>::iterator it = find(v_animal.begin(), v_animal.end(), oldAnimal);

        if(it != v_animal.end()) {
            //v_animal[it / sizeof(Animal*) + v_animal.begin()] 
        }
    }

    void System::deleteAnimal(Animal* animal) {
        vector<Animal*>::iterator it = find(v_animal.begin(), v_animal.end(), animal);

        if(it != v_animal.end()) {
            v_animal.erase(it);
        }
    }

    Animal* System::getAnimal(int index) {
        if(index >= 0 && index <= v_animal.size())
            return v_animal[index];
        else
            return nullptr;
    }
}