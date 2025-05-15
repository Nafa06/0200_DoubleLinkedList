#include <iostream>
#include <string>
using namespace std;

// commit 2 menambahkan class node
class Node
{
public:
    int noMhs;
    Node *next;
    Node *prev;
};

// commit 3 menambahkan class doublelinkedlist
class DoubleLinkedList
{
private:
    Node *START;

public:
    // commit 4 menambahkan method doublelinkedlist
    DoubleLinkedList()
    {
        START = NULL;
    }
    // commit 5 menambahkan fungsi addNode
   
    void addNode()
    {
        int nim;
        string nm;
        cout << "\nEnter the roll number of the student: ";
        cin >> nim;
         // commit 6 menambahkan node newnode sebagai pembantu
        // step 1: allocate memory for new node
        Node *newNode = new Node();

        // step 2: assign value to the data fields
        newNode->noMhs = nim;

        // step 3: insert at beginning if list is empty or nim is smallest
        if (START == NULL || nim <= START->noMhs)
        {
            if (START != NULL && nim == START->noMhs)
            {
                cout << "\nDuplicate number not allowed" << endl;
                return;
            }
            // step 4: newNode.next = START
            newNode->next = START;

            // step 5: START.prev = newNode (if START exist)
            if (START != NULL)
                START->prev = newNode;

            // step 6: newNode.prev = NULL
            newNode->prev = NULL;

            // step 7: START = newNode
            START = newNode;
            return;
        }
    }
};