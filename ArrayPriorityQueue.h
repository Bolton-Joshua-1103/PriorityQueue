#ifndef _ARRAY_QUEUE 
#define _ARRAY_QUEUE 
#include "QueueInterface.h" 
const int MAX_QUEUE = 50; 

template<class ItemType> 
class ArrayPriorityQueue : public QueueInterface<ItemType> 
{ 
private: 
ItemType items[MAX_QUEUE];  // Array of queue items 
int       front;                // Index to front of queue 
int       back;                 // Index to back of queue 
int       count;                // Number of items currently in the queue 
public: 
ArrayPriorityQueue(); 
// Copy constructor and destructor supplied by compiler 
bool isEmpty() const; 
bool enqueue( const ItemType& newEntry); 
bool dequeue();
ItemType peekFront()  const; 
void print();
}; // end ArrayQueue s
#include "ArrayPriorityQueue.cpp" 
#endif    