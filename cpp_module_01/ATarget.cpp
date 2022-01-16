#include "ATarget.hpp"

ATarget::ATarget(const std::string &type) : type(type)
{
}

ATarget::~ATarget()
{
}

ATarget::ATarget(const ATarget &o)
{
    if (this != &o)
        type = o.type;
}

ATarget &ATarget::operator=(const ATarget &o)
{
    if (this != &o)
        type = o.type;
    return *this;
}

const std::string &ATarget::getType() const
{
    return type;
}


void ATarget::getHitBySpell(const ASpell &spell) const
{
    std::cout << type << " has been " << spell.getEffects() << "!\n";
}