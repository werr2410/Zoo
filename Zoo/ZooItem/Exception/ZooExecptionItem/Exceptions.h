#include "../ZooException/ZooException.h"

namespace Zoo {
    class PredatorException : public ZooException {
    public:

        string Massage() const override {
            return "Erorr: In cage ctorage no predator animal";
        }

    };

    class MaxCapacityException : public ZooException { 
    public:

        string Massage() const override {
            return "Erorr: in cage already max animal";
        }

    };

    class NameException : public ZooException {
    public:

        string Massage() const override {
            return "Erorr: data - name empty :(";
        }

    };
}