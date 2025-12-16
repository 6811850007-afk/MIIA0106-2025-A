#include <iostream>
#include <iomanip>

int main() {
    const int multiplier = 7;

    std::cout << "--- ตารางสูตรคูณแม่ " << multiplier << " ---" << std::endl;

    for (int i = 1; i <= 12; ++i) {
        int result = multiplier * i;

        std::cout << multiplier
            << " x "
            << std::setw(2) << i
            << " = "
            << std::setw(3) << result
            << std::endl;
    }

    std::cout << "-------------------------------" << std::endl;

    return 0;
}