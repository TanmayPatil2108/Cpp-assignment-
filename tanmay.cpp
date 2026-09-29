#include <iostream>
#include <string>
using namespace std;

class Book {
private:
int bookId;
string title;
string author;
float price;
static int bookcount;

public:
Book( int id = 0, string t = "Unknown" , string a = "Unknown" , float p = 0.0) {
bookId = id;
title = t;
author =a;
price = p;
bookcount++;
cout << "Book created. Total books: " << bookcount << endl;
}

Book(const Book &b) {
bookId = b.bookId;
title = b.title;
author = b.author;
price = b.price;
bookcount++;
cout << "Book copied. Total books: " << bookcount << endl;
}
~Book() {
bookcount--;
cout << "Book destroyed, Total books: " << bookcount << endl;
}

void display() const {
cout << "Book ID: " << bookId << endl;
cout << "Title: " << title<< endl;
cout << "Author: " << author << endl;
cout << "Price: " << price << endl;
}

static int getBookcount() {
return bookcount;
}
};

int Book::bookcount = 0;

int main() {
Book b1(101, "C++ Programming", "Bjarne Stroustrup", 4500) ;
b1.display();

Book b2(b1);
b2.display();

cout << "Total books: " << Book::getBookcount() << endl;
return 0;
}
