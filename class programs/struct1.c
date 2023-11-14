//write a c program the imnformation of a c program
#include<stdio.h>
struct book
{
    int book_no;
    char book_name[20];
    char author[20];
    char publisher[20];
    float price;

};
int main()
{
  typedef struct book b ;
  b b1={ 1,"python","reemathareja", "don'tknow",200.00 };
  b b2={ 2,"c programmig","reemathareja", "don'tknow",400.00 };
  printf(" book_no=%d\nbook_name=%s\nauthor=%s\npublisher=%s\nprice=%f",b1.book_no,b1.book_name,b1.author,b1.publisher,b1.price);
  printf(" book_no=%d\nbook_name=%s\nauthor=%s\npublisher=%s\nprice=%f",b2.book_no,b2.book_name,b2.author,b2.publisher,b2.price);
  return 0;

}