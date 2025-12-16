#include <iostream>
#include <string>
using namespace std;

void processNumber(int num, int& minValue, int& count) {
    if (count == 0) {
        minValue = num;
    }
    else if (num < minValue) {
        minValue = num;
    }
    count++;
}

int main() {
    int number;
    int minValue = 0;
    int count = 0;

    for (;;) {
        cout << "Enter number: ";
        cin >> number;

        if (number == 0) {
            break;
        }

        processNumber(number, minValue, count);
    
    } 
   

    cout << endl;
    cout << "Total numbers entered: " << count << endl;
    if (count > 0) {
        cout << "Minimum value: " << minValue << endl;
    }

    return 0;
}