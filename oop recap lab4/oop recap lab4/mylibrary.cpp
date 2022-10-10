#include "mylibrary.h"
#include<cstdarg>
MyLibrary::MyLibrary(std::ostream& output_stream) : output_stream(output_stream)
{
    this->books = nullptr;
    books_count = 0;
}

MyLibrary::MyLibrary(const MyLibrary& other) :MyLibrary(other.output_stream, other.books_count, other.books)
{
}

int get_random_int(int min, int max)
{
    return min + rand() % (max + 1 - min);
}

MyLibrary::MyLibrary(std::ostream& output_stream, unsigned books_count, int* books) : output_stream(output_stream)
{
     this->books = new int[books_count];
     this->books_count = books_count;
     for (unsigned i = 0; i < books_count; i++)
     {
         this->books[i] = books[i];
     }
}

MyLibrary::MyLibrary(std::ostream& output_stream, unsigned books_count, int min, int max) : output_stream(output_stream)
{
    books = new int[books_count];
    this->books_count = books_count;
    for (unsigned i = 0; i < books_count; i++)
    {
        books[i] = get_random_int(min,max);

    }


}

MyLibrary::MyLibrary(std::ostream& output_stream, const char* books_values) : output_stream(output_stream)
{
    books_count = 1;
    for (unsigned i = 0; books_values[i] != '\0'; i++)
    {
        if (books_values[i] == ';')
            books_count++;
    }
    books = new int[books_count];
    unsigned k = 0;
    unsigned start = 0;

    for (unsigned i = 0; books_values[i] != '\0'; ++i)
    {
        if (books_values[i] != ';') 
        { continue; }

        char number[16] = {};
        for (unsigned j = 0; j < i - start; ++j)
        {
            number[j] = books_values[start + j];
        }
        books[k++] = atoi(number);
        start = i + 1;
    }
    char number[16] = {};
    for (unsigned j = 0; j < strlen(books_values)-start;++j)
    {
        number[j] = books_values[start + j];
    }
    books[k++] = atoi(number);
}

MyLibrary::MyLibrary(std::ostream& output_stream, unsigned books_count, ...) : output_stream(output_stream)
{
    books = new int[books_count];
    this->books_count = books_count;
    va_list args;
    va_start(args, books_count);

    for (unsigned i = 0; i < books_count; ++i)
    {
        books[i] = va_arg(args, int);
    }

    va_end(args);
}

MyLibrary::~MyLibrary() {
    delete[] books;
}

void MyLibrary::print_books() const
{
    output_stream << "numar de carti: ";
    if (books_count == 0)
    {
        output_stream << -1;
        return;
    }
    output_stream << books_count << " : ";
    for (int i = 0; i < books_count; ++i)
    {
        output_stream << books[i] << ' ';
    }
    output_stream << '\n';
}

void MyLibrary::update_book_id_by_index(unsigned book_index, int book_id)
{
    if (book_index >= books_count) {
        return;
    }
    books[book_index] = book_id;
}

unsigned MyLibrary::get_books_count() const
{
    return books_count;
}

int MyLibrary::get_book_id_by_index(unsigned index) const
{
    if (index >= books_count) {
        return-1;
    }
    return books[index];
}
