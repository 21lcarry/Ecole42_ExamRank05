#pragma once
#include <iostream>

class Warlock {
    public:
        Warlock(const std::string name, const std::string title);
        ~Warlock();

        const std::string &getName() const;
        const std::string &getTitle() const;

        void setTitle(const std::string &val);
        void introduce() const;
    private:
        Warlock();
        Warlock(const std::string &o);
        Warlock &operator=(const std::string &o);

        std::string name;
        std::string title;
};
