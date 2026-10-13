#include<iostream>
using namespace std;

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;

class DoublyLL
{
private:
    PNODE first;
    int iCount;

public:
    DoublyLL();

    void Display();
    int Count();

    void InsertFirst(int iNo);
    void InsertLast(int iNo);
    void InsertAtPos(int iNo, int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
};

// Constructor
DoublyLL::DoublyLL()
{
    first = NULL;
    iCount = 0;
}

// Display
void DoublyLL::Display()
{
    PNODE temp = first;

    cout << "NULL <=> ";

    while(temp != NULL)
    {
        cout << "|" << temp->data << "| <=> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

// Count
int DoublyLL::Count()
{
    return iCount;
}

// Insert First
void DoublyLL::InsertFirst(int iNo)
{
    PNODE newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first->prev = newn;
        first = newn;
    }

    iCount++;
}

// Insert Last
void DoublyLL::InsertLast(int iNo)
{
    PNODE newn = new NODE;
    PNODE temp = first;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
        newn->prev = temp;
    }

    iCount++;
}

// Insert At Position
void DoublyLL::InsertAtPos(int iNo, int iPos)
{
    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout << "Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(iNo);
    }
    else
    {
        PNODE newn = new NODE;
        PNODE temp = first;

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        for(int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        newn->prev = temp;

        temp->next->prev = newn;
        temp->next = newn;

        iCount++;
    }
}

// Delete First
void DoublyLL::DeleteFirst()
{
    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        PNODE temp = first;

        first = first->next;
        first->prev = NULL;

        delete temp;
    }

    iCount--;
}

// Delete Last
void DoublyLL::DeleteLast()
{
    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        PNODE temp = first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->prev->next = NULL;
        delete temp;
    }

    iCount--;
}

// Delete At Position
void DoublyLL::DeleteAtPos(int iPos)
{
    if((iPos < 1) || (iPos > iCount))
    {
        cout << "Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = first;

        for(int i = 1; i < iPos; i++)
        {
            temp = temp->next;
        }

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;

        delete temp;
        iCount--;
    }
}

// Main
int main()
{
    DoublyLL dobj;
    
    dobj.InsertLast(121);
    dobj.InsertFirst(101);
    dobj.InsertFirst(51);
    dobj.InsertFirst(21);

    dobj.InsertLast(11);

    cout << "Linked List :\n";
    dobj.Display();

    cout << "Number of elements  : " << dobj.Count() << endl;

    dobj.InsertAtPos(25,3);
    
    dobj.Display();
        cout << "Number of elements  : " << dobj.Count() << endl;

    dobj.DeleteFirst();

    dobj.Display();
        cout << "Number of elements  : " << dobj.Count() << endl;

    dobj.DeleteLast();

    dobj.Display();
        cout << "Number of elements  : " << dobj.Count() << endl;

    dobj.DeleteAtPos(2);

    dobj.Display();
        cout << "Number of elements  : " << dobj.Count() << endl;


    return 0;
}