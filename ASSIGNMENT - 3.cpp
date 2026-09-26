#include <iostream>
using namespace std;

class Employee
{
  int name;
  string id;
  string department;

public:
 void setData()
{
    cout << "Enter employee name:";
    cin >> name;

    cout << "enter employee ID:";
    cin >>id;

    cout << "Enter department:";
    cin >> department;
}

void display()
  {
      cout << "\n --- EMPLOYEE DETAILS ---" << endl;
      cout << "Name   : " << name << endl;
      cout << "ID  : " << id << endl;
      cout << "Department  : " << department << endl;
  }
};

int main()
{
  Employee emp;
  Employee *ptr = &emp;

ptr->setData();
ptr->display();

return 0;

}
