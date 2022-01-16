#pragma once

#include "ATarget.hpp"
#include <map>

class TargetGenerator {
    public:
        TargetGenerator();
        ~TargetGenerator();

        void learnTargetType(ATarget *target);
        void forgetTargetType(std::string const &type);
        ATarget *createTarget(std::string const &type);
    private:
        TargetGenerator(TargetGenerator &o);
        TargetGenerator &operator=(TargetGenerator &o);

        std::map<std::string, ATarget*> targets;
};
