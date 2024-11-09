#include <iostream>
#include <cstring>
using namespace std;
void printBook(struct Books *book);
struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main()
{
    struct Books Book1;
    struct Books Book2;

    // book 1 specification
    strcpy(Book1.title, " hello buddy");
    strcpy(Book1.author, "john adam");
    strcpy(Book1.subject, "c++ Programming");
    Book1.book_id = 565654;
    
    // book 2 specification
    strcpy(Book2.title, " sam the jangle");
    strcpy(Book2.author, "sam anie");
    strcpy(Book2.subject, "java Programming");
    Book2.book_id = 7548855;

    // print book1 info, passing address of structure
    printBook(&Book1);

    // print book2 info, passing address of structure
    printBook(&Book2);
    return 0;
}
// this function accept pointer to structure as parameter
void printBook( struct Books *book ){
    cout<<" book title: "<<book->title<<endl;
    cout<<" book author: "<<book->author<<endl;
    cout<<" book subject: "<<book->subject<<endl;
    cout<<" book book id: "<<book->book_id<<endl;


}