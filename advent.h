#ifndef ADVENT_H
#define ADVENT_H
#include <list>

int CalcFuelRequirement(int mass);
int RecursivelyCalcFuelRequirement(int mass);
std::vector<int> ProcessIntcode(std::vector<int> code);

#endif