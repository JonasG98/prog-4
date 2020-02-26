#include "Monster.h"
#include "MyForm.h"
Monster::Monster()
{
	name = " ";
}
Monster::Monster(String^ name)
{
	name = name;
}

void Monster::Speak()
{
	MessageBox::Show("I am a Monster!" + name);
}
