#include <iostream>
#include <math.h>
#include <stdio.h>

void ohms_law()
{
    int mode;
    float i, r, v;
    std::cout << "1. Voltage (V)\n2. Current (I)\n3.Resistance (R)\nPlease choose a value to find: ";
    std::cin >> mode;
    if (mode == 1)
    {
        std::cout << "Calculating Voltage...\n";
        std::cout << "Enter the Current (I): ";
        std::cin >> i;
        std::cout << "Enter the Resistance (R): ";
        std::cin >> r;
        std::cout << "Voltage: " << i * r << "\n";
    }
    else if (mode == 2)
    {
        std::cout << "Calculating Current...\n";
        std::cout << "Enter the Voltage (V): ";
        std::cin >> v;
        std::cout << "Enter the Resistance (R): ";
        std::cin >> r;
        std::cout << "Current: " << v / r << "\n";
    }
    else if (mode == 3)
    {
        std::cout << "Calculating Resistance...\n";
        std::cout << "Enter the Voltage (V): ";
        std::cin >> v;
        std::cout << "Enter the Current (I): ";
        std::cin >> i;
        std::cout << "Resistance: " << v / i << "\n";
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
    std::cout << "1. Current & Voltage\n2. Current & Resistance\n3. Voltage & Resistance\nWhat values are known?: ";
    std::cin >> mode;
    if (mode == 1)
    {
        std::cout << "Calculating power loss...\n";
        std::cout << "Enter the Current (I): ";
        std::cin >> i;
        std::cout << "Enter the Voltage (V): ";
        std::cin >> v;
        std::cout << "Power: " << i * v << "\n";
    }
    else if (mode == 2)
    {
        std::cout << "Calculating power loss...\n";
        std::cout << "Enter the Current (I): ";
        std::cin >> i;
        std::cout << "Enter the Resistance (R): ";
        std::cin >> r;
        std::cout << "Power: " << pow(i, 2) * r << "\n";
    }
    else if (mode == 3)
    {
        std::cout << "Calculating power loss...\n";
        std::cout << "Enter the Voltage (V): ";
        std::cin >> v;
        std::cout << "Enter the Resistance (R): ";
        std::cin >> r;
        std::cout << "Power: " << pow(v, 2) * r << "\n";
    }
    else
    {
        std::cout << "\nYou selected an invalid mode, try again...";
        power_loss();
    }
}

int main()
{
    power_loss();

    return 0;
}