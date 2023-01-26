#include "Animal.h"

namespace Zoo {

    Animal::Animal(string name, string description, bool isPredator) {
        setName(name);
        setDescription(description);
        setIsPredator(isPredator);
    }

    Animal::Animal() : Animal("NO DATA", "NO DATA", false) {}

    string Animal::getDescription() const {
        return description;
    }

    string Animal::getName() const {
        return name;
    }

    bool Animal::getisPredator() const {
        return isPredator;
    }

    void Animal::setDescription(string description) {
        this->description = description;
    }

    void Animal::setIsPredator(bool isPredator) {
        this->isPredator = isPredator;
    }

    void Animal::setName(string name) {
        if(name.empty() == false)
            this->name = name;
        else 
            throw new NameException();
    }
}