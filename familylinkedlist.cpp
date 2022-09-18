#include <iostream>
#include <string>
#include "familyclass.h"
using namespace std;

//USING THIS FUNCTION USER CAN SPECIFY THE SIZE OF HIS FAMILY AND THEN INPUT NAME AND AGE OF EVERY MEMBER
Family *takeinputand_appendatlast()
{

    int n;
    cout << "ENTER THE SIZE OF THE FAMILY : ";
    cin >> n;
    cout << endl;

    Family *head = NULL;
    Family *nxt = NULL;
    Family *previous = NULL;

   for(int i=1;i<=n;i++)
    {
        string s;
        cout << "enter " << i << "th family member name : ";
        cin >> s;

        int age;
        cout << "Enter " << i << "th Family memeber age : ";
        cin >> age;

        Family *newmem = new Family(s, age);

        if (head == NULL)
        {
            head = newmem;
            nxt = newmem;
            previous = newmem;
        }
        else
        {
            previous->next = newmem;
            newmem->prev = previous;
            nxt = newmem;
            previous = nxt;
        }
    }
    return head;
}


//THIS FUNCTION WITH PRINT EVERY MEMEBER OF THE LIST 
void printdoubleLL(Family *head)
{
    Family *temp = head;
    cout << endl << "FAMILY TREE--" << endl;
    while (temp != NULL)
    {
        cout << "Members name : " << temp->name << " " << "Memebers age : " << temp->age << endl;
        temp = temp->next;
    }
}


int main()
{

    //taking input and appending it at the end of the linked list;
    Family *head = takeinputand_appendatlast();
    printdoubleLL(head);
}