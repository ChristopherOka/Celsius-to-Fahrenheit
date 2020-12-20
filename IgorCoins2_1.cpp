#include <iostream>
#include <iomanip>
void IgorCoins2_1() { //declare function IgorCoins2_1
	double celsius = 21; //declare double variable celsius
	double fahrenheit; //declare double variable fahrenheit
	fahrenheit = (celsius * (1.8)) + 32; //calculate the converted celsius to fahrenheit
	std::cout.setf(std::ios::fixed); //setting the decimal precision to 3
	std::cout.setf(std::ios::showpoint);
	std::cout.precision(3);
	std::cout << celsius << " degrees celsius in fahrenheit is: " << fahrenheit; //output fahrenheit
}

int main() {
	IgorCoins2_1(); //call function IgorCoins2_1
}