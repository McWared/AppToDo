#pragma once
#include <string>

void VERSION_OUTPUT(int argc, char* argv[]);

class Functions
{
    public:
        void add_new_task();
        void remove_task(std::string task);
};