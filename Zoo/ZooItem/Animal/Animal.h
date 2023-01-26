#pragma once
#include "../Exception/ZooExecptionItem/Exceptions.h"
#include <string>

using std::string;

namespace Zoo {
    class Animal {
    protected:
        string name;
        string description;
        bool isPredator;

    public:
        Animal();
        Animal(string name, string description, bool isPredator);

        void setName(string name);
        void setDescription(string description);
        void setIsPredator(bool isPredator);

        string getName() const;
        string getDescription() const;
        bool getisPredator() const;

        virtual string type() const = 0;
        virtual string info() const = 0;
    };
}

