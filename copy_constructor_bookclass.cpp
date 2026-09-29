#include <iostream>
#include <string>
using namespace std;
        
     class Book {
         private:
         int bID;
   string title;    
   string author;
       float pp;
        static int bCount;


    public:
Book (int id = 0, string t = "Unknown", string a = "Unknown",float p = 0.0) {
bID = id;
title = t;
author = a;
pp = p;
bCount++;
cout << "Book Created, Total Books: " << bCount << endl;

    }


Book (const Book &b)  {

bID = b.bID;
title = b.title;
author = b.author;
pp = b.pp;
bCount++;
cout << "Book copied, Total Books: " << bCount << endl;

}


~Book()  {
     bCount--;
     cout << "Book destroyed, Total Books: " << bCount << endl;

}

  void display() const {
       cout << "Book ID: " << bID << endl;
       cout << "Title: " << title << endl;
       cout << "Author: " << author << endl;
       cout << "Price: " << pp << endl;

    }


    static int getBookCount() {
             return bCount;
 
   }

       };

int Book::bCount = 0;

int main() {
    Book b1(101, "C++ Programming", "Bjarne Stroustrup", 4500);
    b1.display();

    Book b2(b1);
    b2.display();


    cout << "Total books: " << Book::getBookCount() << endl;
                      return 0;

          }
        
