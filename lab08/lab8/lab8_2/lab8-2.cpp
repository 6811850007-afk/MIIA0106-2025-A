#include <iostream>
#include <string>
using namespace std;

struct Student {
    // TODO
    string id;
    string nickname;
    string lineId;
    string phone;
};

int main() {
    const int SIZE = 5;
    Student students[SIZE]; // Array ของ struct

    // INPUT
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        // TODO: cin >> students[i]...
        // TODO: cin >> 
        cout << "Enter of Id;: ";
        cin >> students[i].id;

        cout << "Enter of Nickname: ";
        cin >> students[i].nickname;

        cout << "Enter of LineId: ";
        cin >> students[i].lineId;

        cout << "Enter of Phone: ";
        cin >> students[i].phone;
    }

    // OUTPUT
    cout << "\n===== Student List =====\n";
    for (int i = 0; i < SIZE; i++) {
        // TODO: cout << students[i]...
        cout << students[i].id << "\t" << students[i].lineId << "\t\t" << students[i].nickname << "\t" << students[i].phone << "\n";
        cout << "----------------------\n";
    }

    return 0;
}
