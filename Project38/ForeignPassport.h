#pragma once
#include "Passport.h"
class ForeignPassport :
    public Passport
{
	int numForeign;
	string dataVisa;
public:
	ForeignPassport() {}
	ForeignPassport(string n, int a, int unm, int numF, string data);
	void Init(string n, int a, int unm, int numF, string data);
	void Print();
};

