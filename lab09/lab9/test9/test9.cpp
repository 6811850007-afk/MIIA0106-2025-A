// TODO 1) เติม field ใน class Student ให้ครบ: id, nickname, lineId, phone 
// TODO 2) เขียน method input() รับค่าจากผู้ใช้ 
// TODO 3) เขียน method print() แสดงข้อมูล

#include <iostream>
#include <iostream>

using namespace std;
class Student {
public:
	// TODO 
	int id;
	string nickname;
	string lineID;
	string phoneNumber;

	void input()
	{
		cout << "Student ID: ";
		cin >> id;
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
		cout << "ID : " << id << endl;
		cout << "Nickname : " << nickname << endl;
		cout << "Line ID : " << lineID << endl;
		cout << "Phone : " << phoneNumber << endl;
	}
};
int main()
{
	Student s1;
	Student* p = nullptr;
	// TODO: p = &s1;
	p = &s1;
	// TODO: p->id = ...;
	p->input();
	// TODO: p->nickname = ...;

	cout << "ID: " << p->id << endl;
	cout << "Nickname: " << p->nickname << endl;


	return 0;
}
