// test0528.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet
{
private:
	int feet;
	int inches;
	int inches2;
public:
	void setvalue(int f, int i);
	void display();
	CFeet add(CFeet & objf);
	CFeet operator +(CFeet & objf);
	void init(int f, int i,int inches2);
	CFeet minus(CFeet & doos);
	CFeet operator -(CFeet & doos);
};
void CFeet::setvalue(int f, int i)
{
	feet = f + i / 12;
	inches = i % 12;
}
void CFeet::display()
{
	cout << feet << "英尺" << inches << "英寸" << endl;
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
void CFeet::init(int f, int i,int inches2)
{
	if (i < inches2)
	{
		feet = f - 1;
		inches = i + 12;
	}
}
CFeet CFeet::minus(CFeet & doos)
{
	CFeet temp;
	inches2 = doos.inches;
	temp.setvalue(feet - doos.feet, inches - doos.inches);
	return temp;
}
CFeet CFeet::operator-(CFeet & doos)
{
	CFeet temp;
	inches2 = doos.inches;
	temp.setvalue(feet - doos.feet, -(inches - doos.inches));
	return temp;
}
int main()
{
	CFeet A,B,C,D;
	A.setvalue(1, 1);
	B.setvalue(3, 3);
	C = A + B;
	C.display();
	D = A - B;
	D.display();
    return 0;
}