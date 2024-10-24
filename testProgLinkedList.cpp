//**********************************************************
// Author: D.S. Malik
//
// This program tests the various operations on an ordered
// linked list.
//**********************************************************

#include <iostream>
#include "linkedList.h"                             //Line 1
#include "orderedLinkedList.h"                  //Line 2

using namespace std;                            //Line 3
void testmerge(){
     // Merging two non-empty ordered lists results in a single ordered list
     // Test merging two non-empty ordered lists
     orderedLinkedList<int> list1;
     orderedLinkedList<int> list2;
     list1.insertLast(1);
     list1.insertLast(3);
     list1.insertLast(5);
     list2.insertLast(2);
     list2.insertLast(4);
     list2.insertLast(6);

     orderedLinkedList<int> mergedList;
     mergedList.mergeLists(list1, list2);

     assert(mergedList.front() == 1);
     mergedList.deleteNode(1);
     assert(mergedList.front() == 2);
     mergedList.deleteNode(2);
     assert(mergedList.front() == 3);
     mergedList.deleteNode(3);
     assert(mergedList.front() == 4);
     mergedList.deleteNode(4);
     assert(mergedList.front() == 5);
     mergedList.deleteNode(5);
     assert(mergedList.front() == 6);
     mergedList.deleteNode(6);
     assert(mergedList.isEmptyList());

     // Test merging two empty lists
     orderedLinkedList<int> emptyList1;
     orderedLinkedList<int> emptyList2;

     emptyList1.mergeLists(emptyList1, emptyList2);

     // Check if the merged list is empty
     assert(emptyList1.isEmptyList());

     // Test merging one empty list with a non-empty list
     orderedLinkedList<int> nonEmptyList;
     nonEmptyList.insertLast(5);

     emptyList1.mergeLists(emptyList1, nonEmptyList);

     // Check if the merged list is the same as the non-empty list
     assert(!emptyList1.isEmptyList());
     assert(emptyList1.front() == 5);
}
int main()                                      //Line 4
{
     testmerge();
     cout << "Preset tests passed successfully" << endl;
    orderedLinkedList<int> list1, list2;        //Line 5
    int num;                                    //Line 6

    cout << "Line 7: Enter numbers ending "
         << "with -999." << endl;               //Line 7
    cin >> num;                                 //Line 8

    while (num != -999)                         //Line 9
    {                                           //Line 10
        list1.insert(num);                      //Line 11
        cin >> num;                             //Line 12
    }                                           //Line 13

    cout << endl;                               //Line 14

    cout << "Line 15: list1: ";                 //Line 15
    list1.print();                              //Line 16
    cout << endl;                               //Line 17

    list2 = list1; //test the assignment operator Line 18

    cout << "Line 19: list2: ";                 //Line 19
    list2.print();                              //Line 20
    cout << endl;                               //Line 21

//     cout << "Line 22: Enter the number to be "
//          << "deleted: ";                        //Line 22
//     cin >> num;                                 //Line 23
//     cout << endl;                               //Line 24

//     list2.deleteNode(num);                      //Line 25

//     cout << "Line 26: After deleting "
//          << num << ", list2: " << endl;         //Line 26
//     list2.print();                              //Line 27
//     cout << endl;                               //Line 28
    orderedLinkedList<int> newlist;                //Line 29
    newlist.mergeLists(list1,list2);               //Line 30
    cout << "List after merging is " << endl;      //Line 31
    newlist.print();                               //Line 32  
    


    return 0;					                //Line 33
}                                               //Line 34

