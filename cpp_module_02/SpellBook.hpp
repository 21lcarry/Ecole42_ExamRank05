#pragma once

class ASpell;

#include "ASpell.hpp"
#include <map>

class SpellBook {
    public:
        SpellBook();
        ~SpellBook();

        void learnSpell(ASpell *spell);
        void forgetSpell(const std::string &name);
        ASpell *createSpell(const std::string &name);
    private:
        SpellBook(SpellBook &o);
        SpellBook &operator=(SpellBook &o);

        std::map<std::string, ASpell*> book;
};