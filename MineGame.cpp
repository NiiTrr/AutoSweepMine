#include "MineGame.h"
#include <exception>

string SweepMineProgram::MineWinClass = "ɨ��";
string SweepMineProgram::MineWinName = "ɨ��";

void AutoSweepMine::FindMineProgram(){
	HWND hwnd = FindWindow(SweepMineProgramInfo.MineWinClass.c_str(), 
		SweepMineProgramInfo.MineWinName.c_str());
	if (hwnd == nullptr){
		throw std::exception("û���ҵ�ɨ�׳���!!!");
	}
	SweepMineProgramInfo.MineWinHandle = hwnd;
}








