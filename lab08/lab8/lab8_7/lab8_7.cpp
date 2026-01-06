#include <iostream>
#include <string>

using namespace std;

struct Phone 
{
    string mobile;
    string home;
};

struct Parent 
{
    string name;
    string relationship;
    Phone contact;
};

struct Student 
{
    string id;
    string nickname;
    string lineId;

    Phone myContact;
    Parent myParent;
};

void inputStudent(Student& s1) 
{

    cout << "Student Data " << endl;
    cout << "ID: ";
    cin >> s1.id;
    cout << "Nickname: ";
    cin >> s1.nickname;
    cout << "Line ID: ";
    cin >> s1.lineId;

    cout << "\n Student's Contact Info " << endl;
    cout << "Mobile Number: ";
    cin >> s1.myContact.mobile;
    cout << "Home Number: ";
    cin >> s1.myContact.home;

    cout << "\n Parent Data " << endl;
    cout << "Parent's Name: ";
    cin >> s1.myParent.name;
    cout << "Relationship: ";
    cin >> s1.myParent.relationship;

    cout << "\n Parent's Contact Info " << endl;
    cout << "Parent's Mobile Number: ";
    cin >> s1.myParent.contact.mobile;
    cout << "Parent's Home Number: ";
    cin >> s1.myParent.contact.home;
}

void displayStudent(const Student& s) 
{

    cout << "STUDENT INFORMATION" << endl;
    cout << "-------------------" << endl;

    cout << " Student Data:" << endl;
    cout << " ID: " << s.id << endl;
    cout << " Nickname: " << s.nickname << endl;
    cout << " Line ID: " << s.lineId << endl;

    cout << " Student Contact:" << endl;
    cout << " Mobile: " << s.myContact.mobile << endl;
    cout << " Home: " << s.myContact.home << endl;

    cout << " Parent Data:" << endl;
    cout << " Name: " << s.myParent.name << endl;
    cout << " Relationship: " << s.myParent.relationship << endl;

    cout << " Parent Contact:" << endl;
    cout << " Mobile: " << s.myParent.contact.mobile << endl;
    cout << " Home: " << s.myParent.contact.home << endl;

    cout << "-------------------" << endl;

}
int main() {

    Student s1;

    inputStudent(s1);

    displayStudent(s1);

    return 0;
}