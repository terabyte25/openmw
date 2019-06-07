#ifndef SWITCH_UI_H
#define SWITCH_UI_H

// Include Plutonium
#include <pu/Plutonium>

// Define your main layout as a class inheriting from pu::Layout
class Layout1 : public pu::Layout
{
    public:
        Layout1();
        ~Layout1();
    private:
        // An easy way to keep objects is to have them as private pointer members
        pu::element::Menu *settingsMenu;
};

// Define your application as a class too
class MainApplication : public pu::Application
{
    public:
        MainApplication();
    private:
        // Layout instance
        Layout1 *layout1;
};

int openmw_main(int argc, char**argv);

#endif /* SWITCH_UI_H */