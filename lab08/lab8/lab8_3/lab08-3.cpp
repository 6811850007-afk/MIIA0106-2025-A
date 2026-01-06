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

// TODO: เขียนฟังก์ชันนี้
void printStudent(Student s1) {
    // TODO
    cout << "\n=== Output Student 1 ===\n";
    // TODO: cout << ...
    cout << "ID\tNickname \tLineId \tPhone\n";
    cout << s1.id << "\t" << s1.lineId << "\t\t" << s1.nickname << "\t" << s1.phone << "\n";
}

int main() {
    Student s1;

    cout << "=== Input Student 1 ===\n";
    // TODO: cin >> 
    cout << "Enter of Id;: ";
    cin >> s1.id;

    cout << "Enter of Nickname: ";
    cin >> s1.nickname;

    cout << "Enter of LineId: ";
    cin >> s1.lineId;


    cout << "Enter of Phone: ";
    cin >> s1.phone;
    

    cout << "\n=== Output (from function) ===\n";
    // TODO: เรียก printStudent
    printStudent(s1);



    return 0;
}
