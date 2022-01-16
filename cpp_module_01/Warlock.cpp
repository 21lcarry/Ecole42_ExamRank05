#include "Warlock.hpp"

Warlock::Warlock(const std::string name, const std::string title) : name(name), title(title) 
{
    std::cout << name << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
    for (std::map<std::string, ASpell*>::iterator i = spellbook.begin(); i != spellbook.end(); ++i)
        delete i->second;
    std::cout << name << ": My job here is done!\n";
}

const std::string &Warlock::getName() const
{
    return name;
}

const std::string &Warlock::getTitle() const
{
    return title;
}

void Warlock::setTitle(const std::string &val)
{
    title = val;
}

void Warlock::introduce() const
{
    std::cout << name << ": I am " << name << ", " << title << " !\n";
}

void Warlock::learnSpell(ASpell *spell)
{
    if (spell)
        spellbook[spell->getName()] = spell->clone();
}

void Warlock::forgetSpell(std::string name)
{
            spellbook.erase(name);
}
void Warlock::launchSpell(std::string name, ATarget &target)
{
    std::map<std::string, ASpell*>::iterator spell_it = spellbook.find(name);
    if (spell_it != spellbook.end())
    {
        ASpell *spell = spell_it->second;
        target.getHitBySpell(*spell);
    }
}