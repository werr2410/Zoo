#include "Beast.h"

namespace Zoo {
    Beast::Beast(string name, string description, bool isPredator, string habitat) 
        : Animal(name, description, isPredator) {
        setHabitat(habitat);
    }

    Beast::Beast() : Animal() {
        setHabitat("NO DATA");
    }
    
    string Beast::getHabitat() const {
        return habitat;
    }

    void Beast::setHabitat(string habitat) {
        this->habitat = habitat;
    }

    string Beast::type() const {
        return "Beast";
    }

    string Beast::info() const {
        string res;

        res += " - FISH:  \n";
        res += " - Name: " + name + '\n';
        res += " - Is Predator: " + isPredator ? "yes" : "no";
        res += "\n - Habitat: " + habitat + '\n';
        res += " - Description: " + description + "\n";

        return res;
    }
}
