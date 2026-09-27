#include <iostream>
#include <string>
using namespace std;

class student
{
  private :
     int rollNo;
     string name;
     string branch;

public:
     student(int rollNo, string name, string branch) {
       this->rollNo = rollNo;
       this->name = name;
       this->branch = branch;
}
 void displayData()
    {
      cout << "\n--- STUDENT PROFILE ---"<<endl;
      cout << "Roll No: " << this->rollNo <<endl;
      cout << "Name: " << this->name <<endl;
      cout << "Branch: " << this->branch <<endl;
    }
};

int main()
{
 int rollNo;
 string name;
 string branch;

 cout << "Enter roll number: ";
 cin >> rollNo;

 cout << "Enter student name: ";
 cin >> name;

 cout << "Enter branch: ";
 cin >> branch;

 student s(rollNo, name, branch);

 s.displayData();

 return 0;
}
