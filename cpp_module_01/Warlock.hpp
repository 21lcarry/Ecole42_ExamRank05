#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock {
    public:
        Warlock(const std::string name, const std::string title);
        ~Warlock();

        const std::string &getName() const;
        const std::string &getTitle() const;

        void setTitle(const std::string &val);
        
        void introduce() const;
        void learnSpell(ASpell *spell);
        void forgetSpell(std::string name);
        void launchSpell(std::string name, ATarget &target);

    private:
        Warlock();
        Warlock(const std::string &o);
        Warlock &operator=(const std::string &o);

        std::string name;
        std::string title;
        std::map<std::string, ASpell*> spellbook;
};
