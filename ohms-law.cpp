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

void resistance()
{
    int mode, totalResist;
    float Rtotal;
    auto i = 1;
    auto j = 1;
    std::cout << "How many resistors are you computing?: ";
    std::cin >> totalResist;
    float rArray[totalResist];
    if (totalResist == 2)
    {
        for (i; i <= totalResist; i++)
        {
            std::cout << "Enter the value of the resistor: ";
            std::cin >> rArray[i];
        }
        std::cout << "Total resistance: " << (rArray[1] * rArray[2]) / (rArray[1] + rArray[2]) << " Ohms\n";
    }
    else
    {
        for (i; i <= totalResist; i++)
        {
            std::cout << "Enter the value of the resistor: ";
            std::cin >> rArray[i];
            Rtotal += (1 / rArray[i]);
        }
        std::cout << "Total resistance: " << 1 / Rtotal << " Ohms\n";
    }
}

void current_div()
{
    int mode, totalResist;
    float itotal, input, denom, numer;
    auto i = 1;
    auto j = 0;
    std::cout << "Enter the input Current (I): ";
    std::cin >> input;
    std::cout << "How many resistors are you dividing?: ";
    std::cin >> totalResist;
    float iArray[totalResist];
    if (totalResist == 2)
    {
        for (i; i <= totalResist; i++)
        {
            std::cout << "\n\nEnter the value of the resistor: ";
            std::cin >> iArray[i];
        }
        std::cout << "\nCurrent through " << iArray[1] << " Ohm resistor is: " << (input * iArray[2]) / (iArray[1] + iArray[2]) << " amps\n";
        std::cout << "Current through " << iArray[2] << " Ohm resistor is: " << (input * iArray[1]) / (iArray[1] + iArray[2]) << " amps\n";
    }
    else
    {
        std::cout << "You entered an invalid number of resistors (please enter two resistor values.\n";
        current_div();
    }
    // else (WIP logic for current divider with more than two resistors)
    // {
    //     for (i; i <= totalResist; i++)
    //     {
    //         std::cout << "Enter the value of the resistor: ";
    //         std::cin >> iArray[i];
    //     }
    //     for (j; j <= totalResist; j++)
    //     {
    //         numer = (1 / iArray[j]);
    //         denom += (1 / iArray[j]);
    //         itotal = input * (numer / denom);
    //         std::cout << "Current through " << iArray[j] << " Ohm resistor is: " << itotal << " amps\n";
    //     }
    // }
}

int main()
{
    int mode;
    char ans;
    std::cout << "Hello, Welcome to the Circuit Calculator\n";
    std::cout << "Please enter a mode\n1. Find Ohm's Law\n2. Find Power Loss\n4. Find Total Resistance\n5. Current Division\n6. Quit\n: ";
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
        resistance();
        std::cout << "Compute again? (y/n): ";
        std::cin >> ans;
        if (ans == 'y')
        {
            main();
        }
        else
            return 0;
    }
    else if (mode == 5)
    {
        current_div();
        std::cout << "Compute again? (y/n): ";
        std::cin >> ans;
        if (ans == 'y')
        {
            main();
        }
        else
            return 0;
    }
    else if (mode == 6)
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