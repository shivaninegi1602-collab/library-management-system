#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

class Book {
    int bookID;
    string title;
    string author;
    bool isAvailable;
    string studentName;

public:
    // functions to enter and display book details

    // Default Book initialization with a default constructor
    Book() {
        bookID = 0;
        title = "";
        author = "";
        isAvailable = true;
        studentName = "";
    }

    // Member function to set the book details
    void addBook() {
        cout << "Enter book ID: ";
        cin >> bookID;
        cin.ignore();

        cout << "Enter the book name: ";
        getline(cin, title);

        cout << "Enter the name of author: ";
        getline(cin, author);

    }

    // Memeber function to display a book
    void displayBook() const {
        cout << endl;
        cout << left
             << setw(10) << "Book ID"
             << setw(25) << "Title"
             << setw(20) << "Author"
             << setw(15) << "Status" << endl;


        cout << string(65, '-') << endl;

        cout << left
             << setw(10) << bookID
             << setw(25) << title
             << setw(20) << author
             << setw(15) << (isAvailable? "Available" : "Issued")
             << endl;
    }

    // Member function to return a book's ID
    int getBookId() const {
        return bookID;
    }
};

class Library {
    vector<Book> books;

public:

    // Member function to search a book by its ID
    void searchBook() {
        int targetId;
        bool bookFound = false;
        cout << "Enter the book ID to search: ";
        cin >> targetId;
        
        // For each loop on the vector of books
        for(const Book& book : books) {
            if(book.getBookId() == targetId) {
                bookFound = true;
                cout << "\nBook Found\n";
                book.displayBook();
                break;
            }
        }
        if(!bookFound) {
            cout << "\nBook Not Found!\n";  
        }
    }
    // functions to add and view books
    // funcitons to issue and return books
    // functions to load and save file data
};

int main() {

    // create a library object
    Book b;
    b.addBook();

    // display the menu
    b.displayBook(); 

    
    return 0;
}
