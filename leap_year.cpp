#include <iostream>
#include <cmath>

int main() {

    int year;

    std::cout << "Enter a year: \n";
    std::cin >> year;
    int size = trunc(log10(year))+1;
    if(size == 4){
        if(year % 100 == 0 && year % 400 == 0){
            std::cout << "This year is a Leap Year!\n";
        } else {
            std::cout << "This year isn't a Leap Year!\n";
        }
    } else {
        std::cout << "This year have less that 4 digit!\n";
    }
}