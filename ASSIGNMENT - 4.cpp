#include <iostream>
using namespace std;

class book
{
 public:
        string book_id;
        string book_name;
        string book_author;


 void display()
 {
        cout << "Book ID:" <<book_id <<endl;
        cout << "Book Name:"<< book_name <<endl;
        cout << "Book's Author:" << book_author <<endl;
        cout << "------------" <<endl;
 }

 book()

 {
         book_id="01";
         book_name="Unregistered";
         book_author="Unknown";
 }
     book(string x, string y, string z)
 {
         book_id=x;
         book_name=y;
         book_author=z;
 }
};

 int main()
 {
        book b1;
        book b2("09","qwerty","Robinson");
        book b3;
        b1.display();
        b2.display();
        b3.display();
        return 0;
 }
