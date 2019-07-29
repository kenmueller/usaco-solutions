/*
ID: kenmuel1
PROG: ride
LANG: C++14
*/

#include <iostream>
#include <fstream>
#include <string>

#define MOD_VALUE 47

int getValueFromString(const std::string &string) {
	int acc = 1;
	for (int i = 0; i < string.size(); i++)
		acc *= string[i] - 'A' + 1;
	return acc;
}

int main() {
	std::ifstream fin("ride.in");
	std::ofstream fout("ride.out");
	std::string comet, group;
	fin >> comet >> group;
	fout << (getValueFromString(comet) % MOD_VALUE == getValueFromString(group) % MOD_VALUE ? "GO" : "STAY") << '\n';
	fin.close();
	fout.close();
}