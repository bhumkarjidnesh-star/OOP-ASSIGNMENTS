#include <iostream>
#include <string>
using namespace std;

class student
{
public:
 int studentID;
 int year;
 string div;
 string studentName;

void input()
{
  cout<<"Enter studentID:";
  cin>>studentID;

 cout<<"year:";
 cin>>year;

 cout<<"div:";
 cin>>div;
 
 cout<<"studentName:";
 cin>>studentName;
}

void display()
 {
  cout << "\n--- STUDENT INFORMATION ---" << endl;
  cout << "student ID: " << studentID << endl;
  cout << "year:" << year << endl;
  cout << "div:" << div << endl;
  cout << "studentName:" << endl;
  }
};

int main()
{
  student s;
  s.input();
  s.display();
  return 0;
}
