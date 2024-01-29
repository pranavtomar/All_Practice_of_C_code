#include <stdio.h>
#include <string.h>

struct Person
{
    char name[30];
    int age;
    char gender;
};

int main()
{
    struct Person person = {"John", 25, 0};
    
    printf("name: %s\n""age: %d\n""gender: %d\n",person.name, person.age, person.gender);
}
