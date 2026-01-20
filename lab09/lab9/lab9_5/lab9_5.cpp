// TODO 1) เติม field: id, nickname, height, weight 
// TODO 2) เขียน method input(), print(), calcBMI()

#include <iostream> 
#include <iostream>

using namespace std;
class Student
{
public: // TODO
	int id;
	double nickname;
	double height;
	double weight;
	
	void input()
	{
		cin >> id;
		cout << "ID: ";
		cin >> nickname;
		cout << "Nickname: ";
		cin >> height;
		cout << "height: ";
		cin >> weight;
		cout << "weight: ";
	}

	void print() {
		cout << "ID : " << id << endl;
		cout << "Nickname : " << nickname << endl;
		cout << "height : " << height << endl;
		cout << "weight : " << weight << endl;
		cout << "----------------------\n";
	}

	double calcBMI()
	{
		double h = height / 100.0;
		return weight / (h *h);
	}
};
int main()
{
	Student s1;
	cout << "=== Input Student ===\n";
	// TODO: s1.input();
	s1.input();

	cout << "\n=== Student Info ===\n";
	// TODO: s1.print();
	s1.print();

	cout << "BMI : " << s1.calcBMI() << endl;

	return 0;
}
