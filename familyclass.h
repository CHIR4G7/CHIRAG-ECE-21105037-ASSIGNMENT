#include <string>

class Family
{
    public :
    Family *prev;
    string name;
    int age;
    Family *next;

    Family(string name, int age)
    {
        this->name = name;
        this->age = age;
        this->prev = NULL;
        this->next = NULL;
    }

};