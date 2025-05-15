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
    }
};