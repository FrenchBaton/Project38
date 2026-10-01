#include "ForeignPassport.h"

ForeignPassport::ForeignPassport(string n, int a, int unm, int numF, string data):Passport(n, a, unm) 
{ 
	numForeign = numF;
	dataVisa = data; 
}

void ForeignPassport::Init(string n, int a, int unm, int numF, string data)
{
	Passport::Init(n, a, unm);
	numForeign = numF;
	dataVisa = data;
}

void ForeignPassport::Print()
{
	Passport::Print();
	cout << "numForeign: " << numForeign << "\ndataVisa: " << dataVisa << endl;
}
