#include <iostream>

int main(){
    double tempF = 0.0;
    double tempC = 0.0;


    std::cout << "Enter temperature in Fahrenheit: ";
    std::cin >> tempF;

    tempC = (tempF-32)/1.8;

    std::cout << "The temp is " << tempC << " degrees Celsius.\n";
}