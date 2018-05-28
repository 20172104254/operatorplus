// operatorplus.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CFeet
{
private:
	int feet;
	int inches;
public:
	void display();
	CFeet add(CFeet & a);
	CFeet operator+(CFeet &a);
	void setvalue(int fe, int in);
};
void CFeet::setvalue(int fe, int in)
{
	feet = fe + in / 12;
	inches = in % 12;
}
/*CFeet CFeet::add(CFeet &a)
{
	CFeet temp;
	temp.setvalue(feet + a.feet, inches + a.inches);
	return temp;
}*/
CFeet CFeet::operator+(CFeet&a)
{
	CFeet temp;
	temp.setvalue(feet + a.feet, inches + a.inches);
	return temp;
}
void CFeet::display()
{
	cout << feet << "英尺" << inches << "英寸" << endl;
}

int main()
{
	CFeet A, B, C;
	A.setvalue(7, 7);
	B.setvalue(7, 7);
	C = A + B;//   C=A.add(B);
	C.display();
    return 0;
}

