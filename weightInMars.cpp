//Create a program that takes in the weight 
//of an item and then calculates how much 
//that item would weigh on Mars.

//Weight on Mars= (Weight on Earth/9.81m/s2) * 3.711m/s2

#include <iostream>

int main () {

    double weightEarth;
    double weightMars;

    std::cout << "Enter your weight: ";
    std::cin >> weightEarth;

    weightMars = (weightEarth/9.81)*3.711;

    std::cout << "Your weight in Mars is: " << weightMars << " Kg.\n";

}