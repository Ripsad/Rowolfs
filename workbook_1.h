#pragma once
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

class Exercice1_1
{
public:
	Exercice1_1(double left, double right, double accuracy);
	~Exercice1_1()=default;
	double answer;

private:
	double function(double x);
	double findRoot(double l, double r, double accuracy);
};

class Exercice1_2
{
public:
	Exercice1_2(double left, double right, double accuracy);
	~Exercice1_2() = default;
	double answer;

private:
	double function(double x);
	double findRoot(double l, double r, double accuracy);
};


