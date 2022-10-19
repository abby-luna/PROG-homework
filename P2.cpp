// P2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

void sol2(int);

void cc() {

	int in;
	std::cin >> in;
	sol2(in);
}

void sol2(int in) 
{
	std::string seasons[4] = { "Spring", "Summer", "Autumn", "Winter" };
	if (in == 1)
	{
		std::cout << seasons[3] << "\n";
		return;
	}
	std::cout << seasons[(in - 2) / 3] << "\n";

}

int main()
{
	cc();


}
