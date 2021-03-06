#include "color.h"
#include <iostream>

int main() {
    Color uta_blue{0,100,177};
    Color uta_orange{245,128,38};
    Color maroon{93,23,37};
    std::cout << uta_blue.colorize("UTA Blue " + std::to_string(uta_blue.magnitude())) << ' '
              << uta_orange.colorize("UTA Orange " + std::to_string(uta_orange.magnitude())) << ' '
              << maroon.colorize("Maroon " + std::to_string(maroon.magnitude())) << "\n\n";

    int red, green, blue;
    std::cout << "Enter red, green, and blue ints:   "; 
    std::cin >> red >> green >> blue;
    Color color{red, green, blue};
    std::cout << color.colorize(color.to_string() + " " + std::to_string(color.magnitude())) << std::endl;
}
