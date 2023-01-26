#include "Bird.h"

namespace Zoo {
    Bird::Bird(string name, string description, bool isPredator, float speed) 
        : Animal(name, description, isPredator) {
        setSpeed(speed);
    }

    Bird::Bird() : Animal() {
        setSpeed(0.f);
    }

    float Bird::getSpeed() const {
        return speed;
    }

    void Bird::setSpeed(float speed) {
        if(speed >= 0)
            this->speed = speed;
        else 
            this->speed = 0.f;
    }

    string Bird::type() const {
        return "Bird";
    }

    string Bird::info() const {
        string res;

        res += " - FISH:  \n";
        res += " - Name: " + name + '\n';
        res += " - Is Predator: " + isPredator ? "yes" : "no";
        res += "\n - Speed: " + std::to_string(speed) + '\n';
        res += " - Description: " + description + "\n";

        return res;
    }
}