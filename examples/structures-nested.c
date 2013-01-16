#include<stdio.h>
#include<string.h>

typedef struct Contact{
    char first_name[80];
    char last_name[80];
    typedef struct Birthday{
        int month;
        int day;
        int year;
    }birthday;
}contact;

int main(int argc, char *argv[]){
    contact addressbook;
    strcpy(addressbook.first_name, "Mariz");
    strcpy(addressbook.last_name, "Melo");

    printf("%s %s\n", addressbook.first_name, addressbook.last_name);
}
