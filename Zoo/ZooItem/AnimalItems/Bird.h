#pragma once
#include "../Animal/Animal.cpp"

namespace Zoo {
    class Bird : public Animal {
    private:
        float speed;

    public:
        Bird();
        Bird(string name, string description, bool isPredator, float speed);

        void setSpeed(float speed);
        float getSpeed() const;

        virtual string type() const override;
        virtual string info() const override;        
    };

}