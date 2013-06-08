#include <cstring>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cctype>
#include "day.h"
using namespace std;

const Day& operator[](int index)const {
    ListNode *p1, *p2;
    p1 = p2 = head;
    while (p1) {
        p1 = p1->next; 
        p2 = p2->next;
    } 
    return p2;
}
Day& operator[](int index) {
    ListNode *p1, *p2;
    p1 = p2 = head;
    while (p1) {
        p1 = p1->next; 
        p2 = p2->next;
    } 
    return p2;
}
//needs to insert and append to linkedlist according to order
LinkedList& operator+= (const Day &d) {
    ListNode *ptr, *prev = NULL;
    ListNode newNode;
    newNode->day = d;
/*write a for loop to get the last day which is less 
than d, and use prev to point to that node*/
    if(head->next = NULL) {
        head->day = d;
        return *this;
    }
    while(ptr != NULL && ptr->day < d) {
        prev = ptr;
        ptr = ptr->next;
    }
    if(ptr = NULL) {
        prev->next = newNode;
        return *this;
    }
    else {
        prev->next = newNode;
        newNode->next = ptr;
        return *this;
    }
}
LinkedList& operator-= (const Day &d);