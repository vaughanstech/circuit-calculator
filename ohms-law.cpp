#include <iostream>
#include <math.h>
#include <stdio.h>

int ohms_law()
{
    int mode;
    char ans;
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
        std::cout << "\nCalculate Ohm's Law again? (y/n): " << std::endl;
        std::cin >> ans;
        if (ans == 'y')
        {
            ohms_law();
        }
        else
        {
            return 0;
        }
    }
    else if (mode == 2)
    {
        std::cout << "\n\nCalculating Current...\n";
        std::cout << "Enter the Voltage (V): ";
        std::cin >> v;
        std::cout << "Enter the Resistance (R): ";
        std::cin >> r;
        std::cout << "Current: " << v / r << " Amps\n";
        std::cout << "\nCalculate Ohm's Law again? (y/n): " << std::endl;
        std::cin >> ans;
        if (ans == 'y')
        {
            ohms_law();
        }
        else
        {
            return 0;
        }
    }
    else if (mode == 3)
    {
        std::cout << "\n\nCalculating Resistance...\n";
        std::cout << "Enter the Voltage (V): ";
        std::cin >> v;
        std::cout << "Enter the Current (I): ";
        std::cin >> i;
        std::cout << "Resistance: " << v / i << " Ohms\n";
        std::cout << "\nCalculate Ohm's Law again? (y/n): " << std::endl;
        std::cin >> ans;
        if (ans == 'y')
        {
            ohms_law();
        }
        else
        {
            return 0;
        }
    }
    else
    {
        std::cout << "\nYou selected an invalid mode, try again...\n";
        ohms_law();
    }
    return 0;
}

int power_loss()
{
    int mode;
    char ans;
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
        std::cout << "\nCalculate Power Loss again? (y/n): " << std::endl;
        std::cin >> ans;
        if (ans == 'y')
        {
            power_loss();
        }
        else
        {
            return 0;
        }
    }
    else if (mode == 2)
    {
        std::cout << "\n\nCalculating power loss...\n";
        std::cout << "Enter the Current (I): ";
        std::cin >> i;
        std::cout << "Enter the Resistance (R): ";
        std::cin >> r;
        std::cout << "Power: " << pow(i, 2) * r << "W\n";
        std::cout << "\nCalculate Power Loss again? (y/n): " << std::endl;
        std::cin >> ans;
        if (ans == 'y')
        {
            power_loss();
        }
        else
        {
            return 0;
        }
    }
    else if (mode == 3)
    {
        std::cout << "\n\nCalculating power loss...\n";
        std::cout << "Enter the Voltage (V): ";
        std::cin >> v;
        std::cout << "Enter the Resistance (R): ";
        std::cin >> r;
        std::cout << "Power: " << pow(v, 2) * r << "W\n";
        std::cout << "\nCalculate Power Loss again? (y/n): " << std::endl;
        std::cin >> ans;
        if (ans == 'y')
        {
            power_loss();
        }
        else
        {
            return 0;
        }
    }
    else
    {
        std::cout << "\nYou selected an invalid mode, try again...";
        power_loss();
    }
    return 0;
}

int resistance()
{
    int mode, totalResist;
    char ans;
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
        std::cout << "\nCalculate resistance again? (y/n): " << std::endl;
        std::cin >> ans;
        if (ans == 'y')
        {
            resistance();
        }
        else
        {
            return 0;
        }
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
        std::cout << "\nCalculate resistance again? (y/n): " << std::endl;
        std::cin >> ans;
        if (ans == 'y')
        {
            resistance();
        }
        else
        {
            return 0;
        }
    }
    return 0;
}

int current_div()
{
    int mode, totalResist;
    float itotal, input, denom, numer;
    char ans;
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
        std::cout << "\nCalculate Current Division again? (y/n): " << std::endl;
        std::cin >> ans;
        if (ans == 'y')
        {
            current_div();
        }
        else
        {
            return 0;
        }
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
    return 0;
}

int voltage_div()
{
    int totalResist;
    float input;
    char ans;
    auto i = 1;
    std::cout << "Enter the input Voltage (V): ";
    std::cin >> input;
    std::cout << "How many resistors: ";
    std::cin >> totalResist;
    float vArray[totalResist];
    if (totalResist == 2)
    {
        for (i; i <= totalResist; i++)
        {
            std::cout << "\nEnter the value of the resistor: ";
            std::cin >> vArray[i];
        }
        std::cout << "\nVoltage through " << vArray[1] << " Ohm resistor is: " << (input * vArray[1]) / (vArray[1] + vArray[2]) << "V\n";
        std::cout << "\nVoltage through " << vArray[2] << " Ohm resistor is: " << (input * vArray[2]) / (vArray[1] + vArray[2]) << "V\n";
        std::cout << "\nCalculate Voltage Division again? (y/n): " << std::endl;
        std::cin >> ans;
        if (ans == 'y')
        {
            voltage_div();
        }
        else
        {
            return 0;
            ;
        }
    }
    else
    {
        std::cout << "Please enter 2 resistors\n";
        voltage_div();
    }
    return 0;
}

int main()
{
    int mode;
    char ans;
    std::cout << "Hello, Welcome to the Circuit Calculator\n";
    std::cout << "Please enter a mode\n1. Find Ohm's Law\n2. Find Power Loss\n4. Find Total Resistance\n5. Current Division\n6. Voltage Division\n7. Quit\n: ";
    std::cin >> mode;
    if (mode == 1)
    {
        ohms_law();
        std::cout << "Compute again? (y/n): ";
        std::cin >> ans;
        if (ans == 'y')
        {
            printf("\n\n");
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
            printf("\n\n");
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
            printf("\n\n");
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
            printf("\n\n");
            main();
        }
        else
            return 0;
    }
    else if (mode == 6)
    {
        voltage_div();
        std::cout << "Compute again? (y/n): ";
        std::cin >> ans;
        if (ans == 'y')
        {
            printf("\n\n");
            main();
        }
        else
            return 0;
    }
    else if (mode == 7)
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