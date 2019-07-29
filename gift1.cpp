/*
ID: kenmuel1
PROG: gift1
LANG: C++14
*/

#include <iostream>
#include <fstream>
#include <string>

int main() {
	std::ifstream fin("ride.in");
	std::ofstream fout("ride.out");
	std::string comet, group;
	fin >> comet >> group;
	fout << (getValueFromString(comet) % MOD_VALUE == getValueFromString(group) % MOD_VALUE ? "GO" : "STAY") << '\n';
	fin.close();
	fout.close();
}