// TODO 1) เติม field และ method ใน class Student 
// TODO 2) รับข้อมูลนักศึกษา 5 คน 
// TODO 3) แสดงผลข้อมูลนักศึกษาทั้งหมด
#include <iostream> 
#include <iostream> 
using namespace std;
class Student {
public:

    // TODO
    string studentID;
    string nickname;
    string lineID;
    string phoneNumber;

    void print() {
        cout << "ID : " << studentID << endl;
        cout << "Nickname : " << nickname << endl;
        cout << "Line ID : " << lineID << endl;
        cout << "Phone : " << phoneNumber << endl;
        cout << "----------------------\n";
    }
    };
    int main()
    {
        const int SIZE = 5;
        Student students[SIZE];
        // INPUT
        for (int i = 0; i < SIZE; i++)
        {
            cout << "=== Student " << i + 1 << " ===" << endl;
            cout << "Student ID: ";
            cin >> students[i].studentID;
            cout << "Nickname: ";
            cin >> students[i].nickname;
            cout << "Line ID: ";
            cin >> students[i].lineID;
            cout << "Phone Number: ";
            cin >> students[i].phoneNumber;
            cout << endl;
        }

        // OUTPUT
        cout << "\n===== Student List =====\n";
        for (int i = 0; i < SIZE; i++)
        {
            cout << "ID : " << students[i].studentID << endl;
            cout << "Nickname : " << students[i].nickname << endl;
            cout << "Line ID : " << students[i].lineID << endl;
            cout << "Phone : " << students[i].phoneNumber << endl;
            cout << "----------------------\n";
        }

        return 0;
    }
