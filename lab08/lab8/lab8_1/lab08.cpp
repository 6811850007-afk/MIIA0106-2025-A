#include <iostream>
#include <string>
using namespace std;

struct Student {
    // TODO 1) เติม field ใน struct Student ให้ครบ: id, nickname, lineId, phone
    string id;
    string nickname;
    string lineId;
    string phone;
};

int main() {
    Student s1; // ตัวแปรเดี่ยวของ struct

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

    cout << "\n=== Output Student 1 ===\n";
    // TODO: cout << ...
    cout << "ID\tNickname \tLineId \tPhone\n";
    cout << s1.id << "\t" << s1.lineId << "\t\t" << s1.nickname << "\t" << s1.phone << "\n";
 

    return 0;
}
