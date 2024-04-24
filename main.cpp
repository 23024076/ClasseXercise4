#include <iostream>

int main() {

    int value, num1, num2, sum, difference;
    double quotient, modulo;
    char option;

    std::cout <<"======================================\n";

    std::cout << "\nMENU \n1.Add \n2.Subtract \n3.Divide \n4.Modulus \n";

    std::cout << "\nEnter your choice (1-5):1";
    std::cout << "\nEnter integer number 1:4";
    std::cout << "\nEnter integer number 2:6\n";

    std::cout << "\nReasult: 10\n";
    std::cout << "\nPress y or Y to continue:\n";

    std::cout << "\nMENU \n1.Add \n2.Subtract \n3.Divide \n4.Modulus \n";

    std::cout << "\nEnter your choice (1-5):4";
    std::cout << "\nEnter integer number 1:6";
    std::cout << "\nEnter integer number 2:0\n";

    std::cout << "\nThe second integer is zero, divide by zero";
     std::cout << "\nPress y or Y to continue:\n";

    std::cout << "\nMENU \n1.Add \n2.Subtract \n3.Divide \n4.Modulus \n";

    std::cout << "\nEnter your choice (1-5):3";
    std::cout << "\nEnter integer number 1:2";
    std::cout << "\nEnter integer number 2:4";

    std::cout << "\nReasult: 8";
    std::cout << "\nPress y or Y to continue:\n";


     std::cout <<"======================================\n";

    do{
    std::cout << "\nMENU \n1.Add \n2.Subtract \n3.Divide \n4.Modulus \n";

    std::cout << "\nEnter your choice (1-5):";
    std::cin >> value;
    std::cout << "Enter integer number 1:";
    std::cin >> num1;
    std::cout << "Enter integer number 2:";
    std::cin >> num2;

    if(value == 1){
         sum = num1 + num2;
         std::cout << "\nResult:" << sum;
    } else if(value == 2){
        difference = num1 - num2;
        std::cout << "\nResult:" << difference;

    } else if (value == 3){
        quotient = num1 / num2;
        std::cout << "\nResult:" << quotient;

    } else if (value == 4){
        modulo = num1 % num2;
        std::cout << "\nResult:" << modulo;

    }  else{
        std::cout << "Error";
         break;
    }

    std::cout << "\nPress y or Y to continue:";
    std::cin >> option;
    } while(option == 'y' || option == 'Y');

    return 0;
}
