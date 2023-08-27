#include<iostream>

double mean(double a, double b){
	return (a + b) / 2;
}


int main()
{
	//encapsolation of implemention details
	//avoid repeat code for common task
	
	auto c = mean(2.5, 47.5);

	std::cout << c << '\n';
}
