#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "advent.h"

using namespace std;

// Template
template <class T> T Add(T n1, T n2)
{
    T result;
    result = n1 + n2;

    return result;
}

// Union

// Strncmp

// Main
int main()
{
    string line;
    int sum = 0;
    ifstream modules ("modules.txt");
    
    if (modules.is_open())
    {
        while (getline(modules, line))
        {
            int i = std::stoi(line);

            /* advent 1 (answer)
            sum += CalcFuelRequirement(i);
            cout << to_string(i) + " fuel " + to_string(CalcFuelRequirement(i)) + " sum " + to_string(sum) << endl;
            */

            // advent 2
            //int initialFuel = CalcFuelRequirement(i);
            //sum += RecursivelyCalcFuelRequirement(initialFuel);
        }

        modules.close();
    }
    
    // advent 3
    vector<int> testVector{1,12,2,3,1,1,2,3,1,3,4,3,1,5,0,3,2,9,1,19,1,5,19,23,2,9,23,27,1,27,5,31,2,31,13,35,1,35,9,39,1,39,10,43,2,43,9,47,1,47,5,51,2,13,51,55,1,9,55,59,1,5,59,63,2,6,63,67,1,5,67,71,1,6,71,75,2,9,75,79,1,79,13,83,1,83,13,87,1,87,5,91,1,6,91,95,2,95,13,99,2,13,99,103,1,5,103,107,1,107,10,111,1,111,13,115,1,10,115,119,1,9,119,123,2,6,123,127,1,5,127,131,2,6,131,135,1,135,2,139,1,139,9,0,99,2,14,0,0};

    for (int x : ProcessIntcode(testVector))
    {
        cout << x << ", ";
    }

    // cout << sum << endl;

}
