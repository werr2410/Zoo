#pragma once
#include "../Animal/Animal.cpp"

namespace Zoo {
    class Beast : public Animal {
    private:
        string habitat;

    public:
        Beast();
        Beast(string name, string description, bool isPredator, string habitat);

        void setHabitat(string habitat);
        string getHabitat() const;

        virtual string type() const override;
        virtual string info() const override;
    };
}