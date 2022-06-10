#include <iostream>
#include <vector>


int main() {


    int number = 0;
    std::cout << "Enter a number: \n";
    std::cin >> number;

    int totalEven = 0;
    int totalOdd = 0;

    std::vector<int> numberEven;
    std::vector<int> numberOdd;

    //create vectors Even and Odd;
    for(int i = 0; i < number; i++){
      if(i%2 == 0){
        numberEven.push_back(i);
      } else {
        numberOdd.push_back(i);
      }
    }

    //sum all even numbers
    for(int j = 0; j < numberEven.size(); j++){
      totalEven = totalEven + numberEven[j];
    }
    //sum all odd numbers
    for(int j = 0; j < numberOdd.size(); j++){
      totalOdd = totalOdd + numberOdd[j];
    }

    std::cout << "Sum of even numbers is " << totalEven << "\n";
    std::cout << "Sum of Odd numbers is " << totalOdd << "\n";
}