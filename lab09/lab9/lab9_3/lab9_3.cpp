// TODO 1) เติม field และ method ใน class Student 
// TODO 2) เขียนฟังก์ชัน printStudent(Student s) 
// TODO 3) เรียกใช้งาน printStudent จาก main
#include <iostream> 
#include <iostream> 

using namespace std;
class Student
{
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
};

void printStudent(Student s)
{
	// TODO: แสดงข้อมูลจาก object s
	s.input();

}

int main()
{
	Student s1;
	cout << "=== Input Student 1 ===\n";
	// TODO: s1.input();
	s1.input();

	cout << "\n=== Output (from function) ===\n";
	// TODO: printStudent(s1);
	printStudent(s1)

	return 0;
}
