#pragma once
using namespace System;
using namespace System::Windows::Forms;
ref class Wizard
{
private:
	String^ name;
public: 
	Wizard();
	Wizard(String^ startName);
	void Speak();
};

