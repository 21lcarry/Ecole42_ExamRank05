#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook()
{
    for (std::map<std::string, ASpell*>::iterator i = book.begin(); i != book.end(); ++i)
        delete i->second;
}

void SpellBook::learnSpell(ASpell *spell)
{
    if (spell)
        book[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(const std::string &name)
{
    book.erase(name);
}

ASpell *SpellBook::createSpell(const std::string &name)
{
    std::map<std::string, ASpell*>::iterator spell_it = book.find(name);
    if (spell_it != book.end())
        return spell_it->second;
    else
        return NULL;
}
