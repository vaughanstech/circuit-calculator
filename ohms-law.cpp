#include <iostream>
#include <math.h>
#include <stdio.h>

void ohms_law()
{
    int mode;
    float i, r, v;
    std::cout << "\n\n1. Voltage (V)\n2. Current (I)\n3.Resistance (R)\nPlease choose a value to find: ";
    std::cin >> mode;
    if (mode == 1)
    {
        std::cout << "\n\nCalculating Voltage...\n";
        std::cout << "Enter the Current (I): ";
        std::cin >> i;
        std::cout << "Enter the Resistance (R): ";
        std::cin >> r;
        std::cout << "Voltage: " << i * r << "V\n";
    }
    else if (mode == 2)
    {
        std::cout << "\n\nCalculating Current...\n";
        std::cout << "Enter the Voltage (V): ";
        std::cin >> v;
        std::cout << "Enter the Resistance (R): ";
        std::cin >> r;
        std::cout << "Current: " << v / r << " Amps\n";
    }
    else if (mode == 3)
    {
        std::cout << "\n\nCalculating Resistance...\n";
        std::cout << "Enter the Voltage (V): ";
        std::cin >> v;
        std::cout << "Enter the Current (I): ";
        std::cin >> i;
        std::cout << "Resistance: " << v / i << " Ohms\n";
    }
    else
    {
        std::cout << "\nYou selected an invalid mode, try again...\n";
        ohms_law();
    }
}

void power_loss()
{
    int mode;
    float i, r, v;
    std::cout << "\n\n1. Current & Voltage\n2. Current & Resistance\n3. Voltage & Resistance\nWhat values are known?: ";
    std::cin >> mode;
    if (mode == 1)
    {
        std::cout << "\n\nCalculating power loss...\n";
        std::cout << "Enter the Current (I): ";
        std::cin >> i;
        std::cout << "Enter the Voltage (V): ";
        std::cin >> v;
        std::cout << "Power: " << i * v << "W\n";
    }
    else if (mode == 2)
    {
        std::cout << "\n\nCalculating power loss...\n";
        std::cout << "Enter the Current (I): ";
        std::cin >> i;
        std::cout << "Enter the Resistance (R): ";
        std::cin >> r;
        std::cout << "Power: " << pow(i, 2) * r << "W\n";
    }
    else if (mode == 3)
    {
        std::cout << "\n\nCalculating power loss...\n";
        std::cout << "Enter the Voltage (V): ";
        std::cin >> v;
        std::cout << "Enter the Resistance (R): ";
        std::cin >> r;
        std::cout << "Power: " << pow(v, 2) * r << "W\n";
    }
    else
    {
        std::cout << "\nYou selected an invalid mode, try again...";
        power_loss();
    }
}

int main()
{
    int mode;
    char ans;
    std::cout << "Hello, Welcome to the Circuit Calculator\n";
    std::cout << "Please enter a mode\n1. Find Ohm's Law\n2. Find Power Loss\n4. Quit\n: ";
    std::cin >> mode;
    if (mode == 1)
    {
        ohms_law();
        std::cout << "Compute again? (y/n): ";
        std::cin >> ans;
        if (ans == 'y')
        {
            main();
        }
        else
            return 0;
    }
    else if (mode == 2)
    {
        power_loss();
        std::cout << "Compute again? (y/n): ";
        std::cin >> ans;
        if (ans == 'y')
        {
            main();
        }
        else
            return 0;
    }
    else if (mode == 4)
    {
        std::cout << "Goodbye!\n";
        return 0;
    }
    else
    {
        std::cout << "The mode you selected is invalid, try again...\n\n";
        main();
    }

    return 0;
}