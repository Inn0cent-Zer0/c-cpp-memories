// student_marks_class.cpp
// --------------------------------------------------
//  C++ class to store student details and calculate result
//  Modern C++ version using <iostream> and <cstring>
// --------------------------------------------------

#include <iostream>
#include <cstring>
using namespace std;

class Student {
private:
    char Regno[20];
    char Name[20];
    int Age;
    int m1, m2, m3;

public:
    void getStudData();
    void printMarkSheet();
};

void Student::getStudData() {
    cout << "\n--- Enter Student Details ---\n";
    cout << "Register No: ";
    cin >> Regno;
    cout << "Name       : ";
    cin >> Name;
    cout << "Age        : ";
    cin >> Age;
    cout << "Mark 1     : ";
    cin >> m1;
    cout << "Mark 2     : ";
    cin >> m2;
    cout << "Mark 3     : ";
    cin >> m3;
}

void Student::printMarkSheet() {
    cout << "\n--- Student Marksheet ---\n";
    int Total = m1 + m2 + m3;
    float Avg = Total / 3.0;
    char Result[5];

    if (m1 >= 50 && m2 >= 50 && m3 >= 50)
        strcpy(Result, "PASS");
    else
        strcpy(Result, "FAIL");

    cout << "Total   : " << Total << endl;
    cout << "Average : " << Avg << endl;
    cout << "Result  : " << Result << endl;
}

int main() {
    cout << " Vaish file is created! \n";

    Student Vaish;
    Vaish.getStudData();
    Vaish.printMarkSheet();

    return 0;
}
