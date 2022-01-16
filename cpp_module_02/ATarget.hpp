#pragma once
#include <iostream>

class ASpell;

#include "ASpell.hpp"

class ATarget {
    public:
        ATarget(const std::string &type);
        virtual ~ATarget();
        ATarget();
        ATarget(const ATarget &o);
        ATarget &operator=(const ATarget &o);

        const std::string &getType() const;
        
        void getHitBySpell(const ASpell &spell) const;
        virtual ATarget *clone() const = 0;
    private:
        std::string type;
};
