#pragma once
#include "../Animal/Animal.cpp"
// #include <string>


namespace Zoo {
    class Fish : public Animal{
    private:
        float deep;

    public:
        Fish();
        Fish(string name, string description, bool isPredator, float deep);

        void setDeep(float deep);
        float getDeep() const;

        virtual string type() const override;
        virtual string info() const override;
    };

}

