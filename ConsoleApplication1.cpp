// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

class Dates {
private:
    const std::string MONTHS[12] = { "January",
                              "Febuary",
                              "March",
                              "April",
                              "May",
                              "June",
                              "July",
                              "August",
                              "September",
                              "October",
                              "November",
                              "Decmember"
                             };

    const std::string SEASONS[4] = { "Spring", "Summer", "Autumn", "Winter" };

    std::string getMonth(int pos) 
    {

        return MONTHS[pos - 1];


    }

    std::string getSeason(int pos) 
    {
        if (pos == 1)
        {
            return SEASONS[3];
        }
        return SEASONS[(pos - 2) / 3];

    }

    std::string dayExtension(int num)
    {
        switch (num)
        {
        case 1:
            return "st";

        case 2:
            return "nd";

        case 3:
            return "rd";

        default:
            return "th";

        }
    }


public:


    void p9(int pos)
    {
        std::cout << "The " << pos << dayExtension(pos) << " month is " << getMonth(pos) << std::endl;

    }

    void p10(int pos)
    {
        std::cout << "The " << pos << dayExtension(pos) << " month (" << getMonth(pos) << ") is in " << getSeason(pos) << std::endl;

    }

    void debug()
    {
        for (int i = 1; i < 13; i++)
        {

            p9(i);
            p10(i);

        }

    }

    Dates()
    {
        debug();

        /*

        int x;
        std::cin >> x;

        std::cout << "Problem 9:" << std::endl;
        p9(x);

        std::cout << "Problem 10:" << std::endl;
        p10(x);

        */



    }


};

int main()
{
    Dates x = Dates();
   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
