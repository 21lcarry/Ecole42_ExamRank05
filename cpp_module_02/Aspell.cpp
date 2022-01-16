#include "ASpell.hpp"

ASpell::ASpell(const std::string &name, const std::string &effects) : name(name), effects(effects)
{

}

ASpell::~ASpell()
{

}

ASpell::ASpell(const ASpell &o)
{
    if (this != &o)
    {
        name = o.name;
        effects = o.effects;
    }
}

ASpell &ASpell::operator=(const ASpell &o)
{
    if (this != &o)
    {
        name = o.name;
        effects = o.effects;
    }
    return *this;
}

const std::string &ASpell::getName() const
{
    return name;
}

const std::string &ASpell::getEffects() const
{
    return effects;
}

void ASpell::launch(const ATarget &target) const
{
    target.getHitBySpell(*this);
}