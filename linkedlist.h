#ifndef linkedlistH
#define linkedlistH



/*Class ListNode should be declared in linkedlist.h, and implemented in linkedlist.cpp.
1.1. A ListNode contains a Day, and a next pointer.
1.2. You will need to write a copy constructor for Day.
1.3. There are no public methods in ListNode */

class ListNode {
    Day day;
    ListNode *next;
    ListNode(const Day &d, ListNode *n);
    friend class LinkedList;
};

class LinkedList {
     ListNode *head;
    public:
        //head pointer
        //constructor
        LinkedList();
        //destructor
        ~LinkedList();
        //overloading [] operator
        const Day& operator[](int index)const;
        Day& operator[](int index);
        LinkedList& operator+= (const Day &d);
        LinkedList& operator-= (const Day &d);
        friend class ListNode;
};
#endif