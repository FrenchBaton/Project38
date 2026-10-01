#pragma once
#include<iostream>
#include<string>
using namespace std;

class Passport
{
protected:
	string name;
	int age;
	int num;
public:
	Passport() {}
	Passport(string n, int a, int unm) :name(n), age(a),num(unm) {}
	void Init(string n, int a, int unm) { name = n, age = a, num = unm; }
	void Print();
};

