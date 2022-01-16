#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator()
{
    for (std::map<std::string, ATarget*>::iterator i = targets.begin(); i != targets.end(); ++i)
        delete i->second;
}

void TargetGenerator::learnTargetType(ATarget *target)
{
    if (target)
        targets[target->getType()] = target->clone();
}

void TargetGenerator::forgetTargetType(std::string const &type)
{
    targets.erase(type);
}

ATarget *TargetGenerator::createTarget(std::string const &type)
{
    std::map<std::string, ATarget*>::iterator tg_it = targets.find(type);
    if (tg_it != targets.end())
        return tg_it->second;
    else
        return NULL;
}