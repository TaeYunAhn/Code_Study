#pragma once

class MainController
{
public:
    MainController();
    ~MainController();

    void start();

    void InputInfo(std::string &Name, std::string &Position);
    void InputPerformance(std::string &Name, char &Grade);
    void ShowPersonalInfo(std::string &Name);
    void ShowInfo();

};

