#include "Wizard.h"
#include "MyForm.h"

Wizard::Wizard()
{
	name = "Steve";
}
Wizard::Wizard(String^ startName)
{
	name = startName;
}

void Wizard::Speak()
{
	MessageBox::Show("I am a wizard!" + name);
}