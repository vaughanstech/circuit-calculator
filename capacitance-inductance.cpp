#include <iostream>
#include <math.h>

void capacitance()
{
    int mode, totalC;
    float total;
    auto i = 1, j = 1;
    std::cout << "How are the capacitors arranged?\n1. Series\n2. Parallel\n: ";
    std::cin >> mode;
    std::cout << "How many capacitors are there?: ";
    std::cin >> totalC;
    float cArray[totalC];
    if (mode == 1)
    {
        for (i; i <= totalC; i++)
        {
            std::cout << "Enter the value of the capacitor: ";
            std::cin >> cArray[i];
        }
        for (j; j <= totalC; j++)
        {
            total += (1 / cArray[j]);
        }
        std::cout << "The total Capacitance is: " << total << "\n";
    }
    else if (mode == 2)
    {
        for (i; i <= totalC; i++)
        {
            std::cout << "Enter the value of the capacitor: ";
            std::cin >> cArray[i];
            total += cArray[i];
        }
        std::cout << "The total Capacitance is: " << total << "\n";
    }
    else
    {
        std::cout << "The mode you selected is invalid, try again...";
        capacitance();
    }
}

void rc_constant()
{
    float r, c, Vo, v, param, t, discharge, time_const;
    std::cout << "Enter the resistance: ";
    std::cin >> r;
    std::cout << "Enter the capacitance: ";
    std::cin >> c;
    std::cout << "Enter the source voltage: ";
    std::cin >> Vo;
    time_const = r * c;
    std::cout << "The time constant of your circuit is: " << time_const << " seconds\n";
    std::cout << "It will take " << time_const * 5 << " seconds for the capacitor to be fully charged\n";
}

void inductance()
{
    int mode, totalInduct;
    double htotal;
    auto i = 1;
    auto j = 1;
    std::cout << "1. Series\n2. Parallel\n: ";
    std::cin >> mode;
    std::cout << "How many inductors are you computing?: ";
    std::cin >> totalInduct;
    float hArray[totalInduct];
    if (mode == 1)
    {
        for (i; i <= totalInduct; i++)
        {
            std::cout << "Enter the value of the inductor: ";
            std::cin >> hArray[i];
            htotal += hArray[i];
        }
        std::cout << "Total inductance: " << htotal << "H\n";
    }
    else if (mode == 2)
    {
        for (i; i <= totalInduct; i++)
        {
            std::cout << "Enter the value of the inductor: ";
            std::cin >> hArray[i];
            htotal += (1 / hArray[i]);
        }
        std::cout << "Total inductor: " << 1 / htotal << "H\n";
    }
}

int main()
{
    inductance();

    return 0;
}