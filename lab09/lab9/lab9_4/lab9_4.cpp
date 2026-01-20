// TODO 1) เติม field และ method ใน class Student
// TODO 2) เขียน swapStudent(Student&, Student&) 
// TODO 3) เขียน sortByID(Student[], size)

#include <iostream> 
#include <iostream>

using namespace std;
class Student
{
public:
    // TODO 
    int id;
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
};

void swapStudent(Student& a, Student& b)
{ // TODO 
    Student temp = a;
    a = b;
    b = temp;
}
void sortByID(Student students[], int size)
{ // TODO: bubble sort ตาม id น้อย -> มาก 
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (students[j].id > students[j + 1].id)
            {
                swapStudent(students[j], students[j + 1]);
            }
        }
    }
}
void printStudents(Student students[], int size)
{
    for (int i = 0; i < size; i++)
    {
        // TODO: students[i].print(); 
        students[i].print();
        cout << "----------" << endl;
    }
}
int main()
{
    const int SIZE = 5;
    Student students[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        // TODO: students[i].input();
        students[i].input();
    }

    sortByID(students, SIZE);

    cout << "\n===== Student List (Sorted by ID) =====\n";
    printStudents(students, SIZE);

    return 0;
}

