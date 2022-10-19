#include "ArrayPriorityQueue.h" // Header file 
template<class ItemType> 
ArrayPriorityQueue<ItemType>::ArrayPriorityQueue() : front(0), back(MAX_QUEUE - 1), count(0) 
{ } // end default constructor 

template<class ItemType> 
bool ArrayPriorityQueue<ItemType>::isEmpty() const  
{ 
    return count == 0; 
} // end isEmpty 

template<class ItemType> 
bool ArrayPriorityQueue<ItemType>::enqueue( const ItemType& newEntry) 
{ 
    bool result = false;
    if(count < MAX_QUEUE){
        //We can add another item
        int current = front;
        while(newEntry > items[current] && current <= back){
            current++;
        } //Finding spot to insert
        back = (back+1) % MAX_QUEUE;
        for(int i = back; i>current; i--){
            items[i] = items[i-1];
        } //Shuffling everything back to make a spot
        items[current] = newEntry; //Assigning to the spot we found earlier
        count++;//Updating item count
        result = true;//WE did it!
    }
    return result;
} // end enqueue 

template<class ItemType> 
bool ArrayPriorityQueue<ItemType>::dequeue() 
{ 
//REMOVE HIGHEST PRIORITY ENTRY, DUE TO THE NATURE OF ENQUEUE THIS IS ALWAYS THE TOP ELEMENT.
    bool result = false; 
    if (!isEmpty()) 
    { 
        front = (front + 1) % MAX_QUEUE; 
        count--; 
        result =  true; 
    }  // end if 
    return result; 
} // end dequeue 

template<class ItemType> 
ItemType ArrayPriorityQueue<ItemType>::peekFront() const  
{ 
// Enforce precondition 
if (isEmpty()) 
    throw std::string("peekFront() called with empty queue"); 
// Queue is not empty; return front 
return items[front]; 
} // end peekFront   

template<class ItemType>
void ArrayPriorityQueue<ItemType>::print(){
    std::cout << "Contents" << std::endl;
    for(int i = front; i <= back; i++){
        std::cout << items[i] << std::endl;
    }
}