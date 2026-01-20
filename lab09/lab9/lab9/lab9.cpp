// TODO 1) เติม field ใน class Student ให้ครบ: id, nickname, lineId, phone 
// TODO 2) เขียน method input() รับค่าจากผู้ใช้ 
// TODO 3) เขียน method print() แสดงข้อมูล

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

	void input()
	{
		cout << "Student ID: ";
		cin >> studentID;
		cout << "Nickname: ";
		cin >> nickname;
		cout << "Line ID: ";
		cin >> lineID;
		cout << "Phone: ";
		cin >> phoneNumber;
		cout << "phoneNumber: ";
	}

	void print()
	{
		cout << "\n----- Student Info -----" << endl;
		cout << "ID : " << studentID << endl;
		cout << "Nickname : " << nickname << endl;
		cout << "Line ID : " << lineID << endl;
		cout << "Phone : " << phoneNumber << endl;
	}
};
int main()
{
	Student s1;
	cout << "=== Input Student 1 ===\n";
	s1.input();
	// TODO: s1.input();

	cout << "\n=== Output Student 1 ===\n";
	s1.print();
	// TODO: s1.print();


	return 0;
}
