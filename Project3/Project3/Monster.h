#pragma once
using namespace System;
using namespace System::Windows::Forms;
ref class Monster
{
private:
	
public:
	property String^ name;
	Monster();
	Monster(String^ name);
	void Speak();
};

