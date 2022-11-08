#include<bits/stdc++.h>
using namespace std;

class Book
{
  public:
  int bookId;
  string bookName;
  string bookAuthor;

  private: 
    int bookPrice;
    int noOfPages;
  
  public:

    void setBookPrice(int b)
    {
      if(b<= 0)
      {
        bookPrice = 250;
        return;
      }

      bookPrice = b;
    }

    int getBookPrice()
    {
      return bookPrice;
    }


    void setNoOfPages(int p)
    {
      if(p <= 0)
      {
        noOfPages = 500;
        return;
      }
      noOfPages = p;
    }

    int getNoOfPages()
    {
      return noOfPages;
    }
   
    void display()
    {
      cout << bookId <<" " << bookPrice <<" " << bookName<<" ";
      cout << bookAuthor << " " << noOfPages << endl;
    }
   // Creating Constructor

   // default Constructor
    Book()
    {

    }

    // Parametric Constructor
    Book(int id,string name,string author,int price,int pages)
    {
       bookId = id;
       bookName = name;
       bookAuthor = author;
       bookPrice = price;
       noOfPages = pages;
    }
    Book(int bookPrice,int noOfPages)
    {
       // this  hold the address of current object
       cout << this << endl;
       this->bookPrice = bookPrice;
       this->noOfPages = noOfPages;
    }
};

int main()
{
    
   
    Book b1(100,200);
    cout << &b1 << endl;
    cout << b1.getBookPrice() <<" " << b1.getNoOfPages() << endl;
    

    Book *b4 = new Book(10,650);
    cout << &(*b4) << endl;
    cout << b4->getBookPrice() <<" " << b4->getNoOfPages() << endl;

    Book  b3(323,2323);

    
    Book b2;
    b2.bookId = 1;
    b2.bookName = "CLang";
    b2.bookAuthor = "Manish kasera";

    cout << b2.bookId << " " << b2.bookName<<" " << " " << b2.bookAuthor << endl;
    
    b2.setBookPrice(-3);
    b2.setNoOfPages(-435);
    b2.display();

    b2.setBookPrice(53);
    b2.setNoOfPages(435);
    b2.display();
    

  return 0;
}