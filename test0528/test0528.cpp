// test0528.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet
{
private:
	int feet;
	int inches;
public:
	void setvalue(int f, int i);
	void display();
	CFeet add(CFeet & objf);
	CFeet operator +(CFeet & objf);
};
void CFeet::setvalue(int f, int i)
{
	feet = f + i / 12;
	inches = i % 12;
}
void CFeet::display()
{
	cout << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
CFeet CFeet::add(CFeet & objf)
{
	CFeet temp;
	temp.setvalue(feet + objf.feet, inches + objf.inches);
	return temp;
}
CFeet CFeet::operator+(CFeet & objf)
{
	CFeet temp;
	temp.setvalue(feet + objf.feet, inches + objf.inches);
	return temp;
}
int main()
{
	CFeet A,B,C;
	A.setvalue(10, 8);
	B.setvalue(7, 6);
	C = A + B;
	C.display();
    return 0;
}

