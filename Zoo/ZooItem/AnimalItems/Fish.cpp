#include "Fish.h"

namespace Zoo {
    Fish::Fish(string name, string description, bool isPredator, float deep) 
        : Animal(name, description, isPredator) {
        setDeep(deep);
    }

    Fish::Fish() : Animal() {
        setDeep(0.f);
    }

    float Fish::getDeep() const {
        return deep;
    }

    void Fish::setDeep(float deep) {
        if(deep >= 0)
            this->deep = deep;
        else
            this->deep = 0;
    }

    string Fish::type() const {
        return "Fish";
    }

    string Fish::info() const {
        string res;

        res += " - FISH:  \n";
        res += " - Name: " + name + '\n';
        res += " - Is Predator: " + isPredator ? "yes" : "no";
        res += "\n - Deep: " + std::to_string(deep) + '\n';
        res += " - Description: " + description + "\n";

        return res;
    }
}