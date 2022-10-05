// Sheet_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>


class Operations 
{
private:
    // private varible declarations
    int departureTime[2];
    int arrivalTime[2];
    int solution[2];

    // private input handler
    void inputs() 
    {
        int depart;
        int arrive;

        std::cout << "Enter your departure time (format hrmi): ";
        std::cin >> depart;

        std::cout << "Enter your arrival time (format hrmi): ";
        std::cin >> arrive;


        // must more effecent than messing with strings!! 
        // 
        // 1000 / 100 = 10
        departureTime[0] = depart / 100;
        arrivalTime[0] = arrive / 100;


        // 1256 % 1200 = 56 
        if (departureTime[0] == 0)
        {
            departureTime[1] = depart;
        }
        else
        {
            departureTime[1] = depart % (departureTime[0] * 100);
        }


        if (arrivalTime[0] == 0)
        {
            arrivalTime[1] = arrive;
        }
        else
        {
            arrivalTime[1] = arrive % (arrivalTime[0] * 100);
        }



    }

    //private solution function {returns void}
    void solve()
    {

        int hr = arrivalTime[0] - departureTime[0];
        int min = arrivalTime[1] - departureTime[1];

        // if our minute is less than 0, we need to take from the hour
        if (min < 0)
        {
            // we add the hour to our minutes, then take the hour from the hours ((fails when arivalTime < departTime))
            min += 60;
            hr--;

        }
        
        // add it to a solution varibe so we can format it a bit nicer
        solution[0] = hr;
        solution[1] = min;

    }



public:
    // public contructor
    Operations() 
    {
 
        // gather inputs and solve, 
        inputs();
        solve();
        
    }

    //public solution formater
    void getSolution()
    {
        // public function for formating,, 

        std::cout << "Train arrives in " << solution[0] << ":" << std::setw(2) << std::setfill('0') << solution[1] << std::endl;


    }

};


int main()
{

    while (1)
    {
        // create our object and get the solution 
        Operations assingment = Operations();

        // perhaps this would be better if it returned the value, although we have no further operations so it is obsolete
        assingment.getSolution();
    }
}
