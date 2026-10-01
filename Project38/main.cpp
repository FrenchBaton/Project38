#include<iostream>
#include "ForeignPassport.h"

using namespace std;

int main() {
	ForeignPassport as("NAME", 21, 88005553535, 99932284, "01.10.2026");
	as.Print();
	return 0;
}