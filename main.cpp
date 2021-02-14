#include <iostream>
#include <string>

int main(){
    std::string name = "", greeting = "Sveikas, ", first_row = "", second_row = "", third_row = "", fourth_row = "", fifth_row = "";
    int row_length;

    std::cout << "Koks jusu vardas? ";
    std::cin >> name;

    greeting += name;
    greeting += "!";

    row_length = greeting.length() + 4;

    for (int i = 0; i < row_length; i++) {
        first_row += "*";
        if (i == 0 || i == row_length - 1)
            second_row += "*";
        else
            second_row += " ";
    }

    third_row = "* " + greeting + " *";
    fourth_row = second_row;
    fifth_row = first_row;

    std::cout << first_row << std::endl;
    std::cout << second_row << std::endl;
    std::cout << third_row << std::endl;
    std::cout << fourth_row << std::endl;
    std::cout << fifth_row << std::endl;

    return 0;
}
