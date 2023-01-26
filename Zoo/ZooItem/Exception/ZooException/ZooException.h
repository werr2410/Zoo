#pragma once
#include <string>

using std::string;

namespace Zoo {

    class ZooException {
    public:
        virtual string Massage() const = 0;

    };
}