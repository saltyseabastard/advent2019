/*
Fuel required to launch a given module is based on its mass. 
Specifically, to find the fuel required for a module, take its mass, 
divide by three, round down, and subtract 2.
*/
#include <string> 
#include <iostream>
#include <vector>
#include <atomic>

using namespace std;

int CalcFuelRequirement(int mass)
{
    return (mass / 3) - 2;
}

int RecursivelyCalcFuelRequirement(int mass)
{
    // base case
    if (mass <= 5) return mass;

    cout << "mass " + to_string(mass) + " + recalc " + to_string(CalcFuelRequirement(mass)) << endl;

    // induction
    return mass + RecursivelyCalcFuelRequirement(CalcFuelRequirement(mass));
}

vector<int> ProcessIntcode(vector<int> code)
{
    int currentPointer = 0;
    int commandSetCount = 4;

    for (int i = 0; i < code.size(); i += commandSetCount)
    {
        if (code[i] == 99)
            return code;

        if (code[i] == 1)
        {
            code[code[i+3]] = code[code[i+1]] + code[code[i+2]];
        }
        else if (code[i] == 2)
        {
            code[code[i+3]] = code[code[i+1]] * code[code[i+2]];
        }
    }
}

void foo()
{
    std::atomic_bool myBool;
}

/*
Any iteration is done in a thread. Pass pointer to list into thread and wait for it from foreground thread.
*/