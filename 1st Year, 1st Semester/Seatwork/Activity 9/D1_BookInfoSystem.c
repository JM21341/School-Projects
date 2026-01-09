/*
    TASK D : MINI APPLICATION
    D1 : Simple Information System (Struct + Array)

    Create a mini system using structures:
        ● Define a structure type Book with:
            1. char title[50]
            2. char author[30]
            3. int year
        ● Allow the user to:
            1. Enter data for 5 books
            2. Display all books
            3. Search by author name
            4. Display matched results
*/
#include <stdio.h>
#include <string.h> // for strcmp 

#define MAX_BOOKS 5 // global variable for max books
#define MAX_NAME_CHARS 30

struct Book{
    char title[50];
    char author[MAX_NAME_CHARS];
    int year;
} books[MAX_BOOKS];

// For the input of books
void insertBooks(){
    for(int i = 0; i < MAX_BOOKS; i++){
        printf("\nEnter Book %d title here: ", i + 1); 
        scanf(" %[^\n]", books[i].title);

        printf("\nEnter the author of %s here: ", books[i].title);
        scanf(" %[^\n]", books[i].author);

        printf("\nEnter publication year here: ");
        scanf("%d", &books[i].year);
    }
}

// printing of all books
void printAllBooks(){
    for(int i = 0; i < MAX_BOOKS; i++){
        printf("\nBOOK %d", i + 1);
        printf("\nTitle: %s", books[i].title);
        printf("\nAuthor: %s", books[i].author);
        printf("\nPublication Year: %d", books[i].year);
        printf("-----------------------------------------");
    }
}

// searching books
void searchBook(const char* author_name, int* cont){
    for(int i = 0; i < MAX_BOOKS; i++){
        if(strcmp(author_name, books[i].author) == 0){
            printf("\nTitle: %s", books[i].title);
            printf("\nAuthor: %s", books[i].author);
            printf("Publication Year: %d", books[i].year);
            *cont = 1;
        }
    }
}

// extra func : asking to continue the main do-while loop
int askToContinue(){
    char cont;
    printf("\nDo you wish to continue? (y/n): ");
    scanf(" %c", &cont);

    if(cont == 'y'){
        return 1;
    } else if(cont == 'n'){
        return 0;
    } else{
        return -1;
    }
}

int main(){
    int dec = 0, dec2 = 0, cont = 0;
    char author_name[MAX_NAME_CHARS];

    insertBooks();

    do{
        printf("\nOPTIONS AVAILABLE: ");
        printf("\n[1] View All Books");
        printf("\n[2] Search Book by Author");
        printf("\n[3] Exit");
        printf("\nEnter decision here: ");
        scanf("%d", &dec);

        switch(dec){
            case 1:
                printAllBooks;
                cont = askToContinue();
                break;
            case 2:
                printf("\nEnter author's name here: ");
                scanf(" %[^\n]", author_name);

                searchBook(author_name, &cont);
                break;
            case 3:
                printf("\nSuccessfully exited!");
                cont = 0; 
                break;
            default:
                printf("\nInvalid input!");
                cont = 0;
                break; 
        }

        if(cont == 1) continue;
        else break;
    } while(cont == 1);
}