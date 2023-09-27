#include "workbook_1.h"

Exercice1_1::Exercice1_1(double left, double right,double accuracy)
{
	answer = findRoot(left, right, accuracy);

}

double Exercice1_1::function(double x) {
	double e = M_E; // get exponent value
	return  pow(e, x - 1) - pow(x, 3) - x; //put your functions here
}


double Exercice1_1::findRoot(double l, double r, double accuracy) {
	double mid = l - 1;
	int count_step = 0;
	while ((r - l) > accuracy)
	{
		count_step++;
		mid = abs(l - r) / 2;
		if (function(mid) > 0) {
			r = mid;
		}
		else
		{
			l = mid;
		}
		std::cout << count_step << " " << mid << std::endl;

	}
	return mid;
}

double Exercice1_2::function(double x) {
	double e = M_E; // get exponent value
	return  pow(e, x - 1) - pow(x, 3) - x; //put your functions here
}

double Exercice1_2::findRoot(double l, double r, double accuracy) {
	while (abs(r - l) > accuracy) {
		l = l - (r - l) * function(l) / (function(r) - function(l));
		r = r - (l - r) * function(r) / (function(l) - function(r));
	}
	return r;
}

