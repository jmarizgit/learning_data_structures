#include<stdio.h>
#include<string.h>

typedef struct{
    char first_name[80];
    char last_name[80];
}Contact;

int main(int argc, char *argv[]){
    Contact addressbook;
    strcpy(addressbook.first_name, "Mariz");
    strcpy(addressbook.last_name, "Melo");

    printf("%s %s\n", addressbook.first_name, addressbook.last_name);
}