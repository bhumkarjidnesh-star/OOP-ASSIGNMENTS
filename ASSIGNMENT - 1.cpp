#include <iostream>
using namespace std;

class book
{
    public:
     string book_id;
     string book_name;
     string book_author;

    void display()
    { cout<<"Book ID:"<<book_id<<endl;
     cout<<"Book Name:"<<book_name<<endl;
     cout<<"Author Name:"<<book_author<<endl;
     cout<<"--------------------------------"<<endl;
    }
};
 int main()
{
    book b1;
    b1.book_id="001";
    b1.book_name="python fundamental";
    b1.book_author="vipin sharma";
    b1.display();

    book b2;
    b2.book_id="002";
    b2.book_name=" C++ thoughts ";
    b2.book_author="kuldeep yadav";
    b2.display();

    book b3;
    b3.book_id="333";
    b3.book_name="C++ WorkBook";
    b3.book_author="glenn maxwell";
    b3.display();
    return 0;
    
}
