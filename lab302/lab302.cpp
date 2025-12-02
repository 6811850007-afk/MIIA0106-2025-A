#include <string>
#include <iostream>
using namespace std;

int main() {

	// single, non-conflicting declarations
	string name;
	int score;
	string studentID;

	// รับค่าชื่อ
	cout << "Enter your name: ";
	getline(cin, name);   // ใช้ getline เพื่อรับข้อความทั้งประโยค

	// รับค่าเกรด
	cout << "Enter your  score: ";
	if (!(cin >> score)) {                    // ตรวจสอบการป้อนค่าเป็นจำนวนเต็ม
		cout << "Invalid input for score" << endl;
		return -1 ;
	}

	// รับค่ารหัสนักศึกษา
	cout << "Enter your  studentID: ";
	cin >> studentID;

	cout << endl; // ขึ้นบรรทัด

	// แสดงผลลัพธ์
	cout << "======= Student Profile =======" << endl;
	cout << "-----------------------" << endl;
	cout << "Name       : " << name << endl;
	cout << "Student ID : " << studentID << endl;
	cout << "Score      : " << score << endl;

	// ตรวจสอบช่วงคะแนนก่อนคำนวณเกรด
	if (score < 0 || score > 100) {
		cout << "error" << endl;
		return 1;
	}

	// คำนวณเกรด (แก้เงื่อนไขผิดพลาดเดิม)
	if (score >= 90) {
		cout << "Grade : A" << endl;
	}
	else if (score >= 80) {
		cout << "Grade : B" << endl;
	}
	else if (score >= 70) {
		cout << "Grade : C" << endl;
	}
	else if (score >= 60) {
		cout << "Grade : D" << endl;
	}
	else {
		cout << "Grade : F" << endl;
	}
	return 0;

}