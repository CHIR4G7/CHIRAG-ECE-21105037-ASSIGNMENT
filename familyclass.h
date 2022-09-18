#include <string>

class Family
{
    public :
    Family *prev;
    char name;
    int age;
    Family *next;

    Family(char name, int age)
    {
        this->name = name;
        this->age = age;
        this->prev = NULL;
        this->next = NULL;
    }

};