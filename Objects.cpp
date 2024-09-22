#include <iostream>
#include <string>

void VERSION_OUTPUT(int argc, char* argv[])
{
    if (argc < 2) {
        // report version
        std::cout << argv[0] << " Version " << App_VERSION_MAJOR << "."
                << App_VERSION_MINOR << std::endl;
        std::cout << "Usage: " << argv[0] << " number" << std::endl;
    }
}

class Functions
{
    public:
        void add_new_task(std::string task)
        {
            // TODO
        }

        void remove_task(std::string task)
        {
            // TODO
        }

        void mark_task_done(std::string task)
        {
            // TODO
        }
};

class Interface
{
    public:
        void display_tasks()
        {
            // TODO
        }

        void create_button()
        {
            // TODO
        }

        void remove_button()
        {
            // TODO
        }

        void mark_done_button()
        {
            // TODO
        }
};