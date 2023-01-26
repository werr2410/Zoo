#pragma once
#include "../AnimalItems/Beast.cpp"
#include "../AnimalItems/Bird.cpp"
#include "../AnimalItems/Fish.cpp"
#include <vector>

using std::vector;
using std::find;

namespace Zoo {
    class System {
    private:
        string number;
        int m_Animal;

        vector<Animal*> v_animal;

    public:
        System(string number, int m_Animal);
        
        void setNumber(string number);
        void setMaxAnimal(int m_Animal);

        string getNumber() const;
        int getMaxAnimal() const;

        void pushAnimal(Animal* animal);
        void deleteAnimal(Animal* animal);
        void repushAnimal(Animal* oldAnimal, Animal* newAnimal);
        Animal* getAnimal(int index);

        
    };
}

