#pragma once
#include <string>
//#include "AccController.h"

class AccController; // ���漱��
class MainController
{
public:
	MainController();
	~MainController();

	void start();

	void InputAccInfo(int &Acc, std::string &Name, int &Balance);
	void InputMoneyInfo(int &Acc, int &Money, bool bDeposit = true);
	void ShowAccInfo();
	void PrintResult(EN_RESULT res, bool bDeposit = false);

private:
	//AccController accController;
	AccController *accController;
};