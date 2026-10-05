# Library Management System

A simple **text-based Library Management System** developed using **C++** to practice and implement **Object-Oriented Programming (OOP)** and **File Handling** concepts.

## Features

- Add new books
- View book details
- Update book availability
- Issue books to students
- Return books
- Track issued books
- Maintain book inventory
- Store book details such as:
  - Book ID
  - Book Title
  - Author
  - Availability Status
- Preserve data using file handling even after closing the application

## Project Description

The **Library Management System** is designed for **admins/librarians** to manage the library's book inventory.

The librarian can add new books, view existing book details, update the availability of books, issue books to students, and process returned books.

Each book contains important information such as its **ID, title, author, and availability status**.

The system uses **file handling** to store the library data permanently. This allows the book inventory and issued-book information to remain available even after the application is closed.

## OOP Concepts Used

This project is implemented using various **Object-Oriented Programming concepts**, including:

- **Classes and Objects**
- **Encapsulation**
- **Abstraction**
- **Constructors**
- **Member Functions**
- **Access Specifiers**

## File Handling

File handling is used to preserve library data between program executions.

The system stores information such as:

- Book details
- Book inventory
- Issued books
- Availability status

When the application starts, the stored data can be read from the files, allowing the system to continue from its previous state.

## Book Information

Each book maintains the following details:

| Field | Description |
|---|---|
| Book ID | Unique identifier for the book |
| Title | Name of the book |
| Author | Author of the book |
| Availability | Shows whether the book is available or issued |

## Basic Operations

### Add Book

The librarian can add a new book by providing its:

1. Book ID
2. Title
3. Author

The book is then added to the library inventory.

### View Books

The librarian can view the details of books stored in the library, including their availability status.

### Issue Book

When a book is issued to a student:

- The book is marked as **issued**.
- Its availability status is updated.
- The issued-book information is stored.

### Return Book

When a student returns a book:

- The book is marked as **available**.
- Its availability status is updated.
- The stored issue information is updated accordingly.

## Technologies Used

- **Language:** C++
- **Programming Concept:** Object-Oriented Programming
- **Data Storage:** File Handling
- **Interface:** Text-Based / Console

## Project Structure

```text
Library-Management-System/
│
├── main.cpp
└── README.md
