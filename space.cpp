#include <iostream>

int main() {

    double weight = 0;
    int planet = 0;
    double weightPlanet;

    std::cout << "Enter your weight: ";
    std::cin >> weight;
    std::cout << "List of Planet: \n" << "1 - Mercury\n" << "2 - Venus\n" << "3 - Mars\n"
    << "4 - Jupiter\n" << "5 - Saturn\n" << "6 - Uranus\n" << "7 - Neptune\n";
    std::cin >> planet;

    switch (planet)
    {
    case 1:
        weightPlanet = (weight/9.81)*3.711;
        std::cout << "Your weight in Mercury is: " << weightPlanet << " Kg.\n";
        break;
    case 2:
        weightPlanet = (weight/9.81)*9.1;
        std::cout << "Your weight in Venus is: " << weightPlanet << " Kg.\n";
        break;
    case 3:
        weightPlanet = (weight/9.81)*3.711;
        std::cout << "Your weight in Mars is: " << weightPlanet << " Kg.\n";
        break;
    case 4:
        weightPlanet = (weight/9.81)*23.4;
        std::cout << "Your weight in Jupiter is: " << weightPlanet << " Kg.\n";
        break;
    case 5:
        weightPlanet = (weight/9.81)*10.6;
        std::cout << "Your weight in Saturn is: " << weightPlanet << " Kg.\n";
        break;
    case 6:
        weightPlanet = (weight/9.81)*9.2;
        std::cout << "Your weight in Uranus is: " << weightPlanet << " Kg.\n";
        break;
    case 7:
        weightPlanet = (weight/9.81)*11.9;
        std::cout << "Your weight in Neptune is: " << weightPlanet << " Kg.\n";
        break;
    default:
        std::cout << "This planet doesn't exist!\n";
        break;
    }

}