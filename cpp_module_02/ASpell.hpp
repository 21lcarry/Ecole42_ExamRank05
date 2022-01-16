#pragma once
#include <iostream>

class ATarget;

#include "ATarget.hpp"

class ASpell {
    public:
        ASpell();
        ASpell(const std::string &name, const std::string &effects);
        virtual ~ASpell();
        ASpell(const ASpell &o);
        ASpell &operator=(const ASpell &o);

        const std::string &getName() const;
        const std::string &getEffects() const;

        void launch(const ATarget &target) const;
        virtual ASpell *clone() const = 0;
    private:
        std::string name;
        std::string effects;
};
