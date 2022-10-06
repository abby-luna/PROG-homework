#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;


void p1() 
{
	double x, y, result;

	cout << "Enter lenght and width: ";
	cin >> x >> y;

	result = x * y;
	cout << "Area: " << result << " m2" << endl;
}

void p2()
{
	double x, y, result;

	cout << "Enter lenght and width: ";
	cin >> x >> y;

	result = x * y;
	cout << "Area: " << fixed << setprecision(2) << result << " m2" << endl;
}

void p3() 
{
	int x, y;
	cout << "Enter 2 ints: ";
	cin >> x >> y;

	cout << x << " * " << y << " = " << x * y << endl;
	cout << x << " / " << y << " = " << x / y << endl;
	cout << x << " + " << y << " = " << x + y << endl;
	cout << x << " - " << y << " = " << x - y << endl;
	cout << x << " % " << y << " = " << x % y << endl;

}

void p4()
{
	int days;
	cout << "Enter a number of days: ";
	cin >> days;

	cout << days / 7 << " weeks " << days % 7 << " days" << endl;
}

void p5()
{

	double startSalary;
	double increacePct;

	cout << "Enter your salary fowllowed by the increse percent: ";
	cin >> startSalary >> increacePct;

	for (int i = 0; i <= 4; i++) 
	{
		// p = c(1 + i)^t
		cout << startSalary * (pow(1 + increacePct, i)) << " is your salry after " << i << " years\n";

	}

}
void p6() {


}

void p7() {
	// cost of car hire (.2 per km) (+100 per 1000 km)
	int driveLen;

	cout << "How far do you plan to travel? ";
	cin >> driveLen;

	cout << fixed << setprecision(2) << (driveLen * .2) + ((driveLen / 1000) * 100) << " euro";

}
int main()
{
	p7();
}
