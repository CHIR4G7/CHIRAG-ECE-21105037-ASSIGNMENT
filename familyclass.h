#include <string>
using namespace std;


//CREATING A CLASS SUCH THAT IT CONTAINS NAME ANS AGE OF THE FAMILY MEMEBER AND POINTER SFOR THE NEXT AND PREVIOUS MEMBERS OF THE FAMILY.
class Family
{
    public :
    Family *prev;
    string name;//FOR NAME OF THE MEMBER
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
