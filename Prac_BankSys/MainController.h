#pragma once
#include <string>
#include "AccController.h"

class MainController
{
public:

    MainController();
    ~MainController();

    void start();
    
    void InputAccInfo(int &Acc, std::string &Name, int &Balance);

private:
    AccController accController;
    
};



