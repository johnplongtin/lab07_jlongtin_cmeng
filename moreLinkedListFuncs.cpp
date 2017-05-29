#include <cassert>
#include "linkedList.h"
#include "linkedListFuncs.h"

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return a pointer to node with the largest value.
// You may assume list has at least one element  
// If more than one element has largest value, 
//  break tie by returning a pointer to the one the occurs
//  earlier in the list, i.e. closer to the head

Node * pointerToMax(LinkedList *list) {

  assert(list!=NULL);
  assert(list->head != NULL);
  
  Node *maxNode;
  maxNode= list->head;
 
  for(Node *p = list->head->next; p!=NULL; p=p->next){
     if((*maxNode).data< (p->data)) {
         maxNode = p;
  }
  
}  
  return maxNode;
  
}


  Node * pointerToMin(LinkedList *list) {
    assert(list!=NULL);
    assert(list->head != NULL);
         
    Node *minNode;
    minNode= list->head;
   
    for(Node *p = list->head->next; p!=NULL; p=p->next){
        if((*minNode).data > (p->data)) {
            minNode = p;
          }
    
    }
          return minNode;
}
 




// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the largest value in the list.
// This value may be unique, or may occur more than once
// You may assume list has at least one element

int largestValue(LinkedList *list) {
    assert(list!=NULL);
    assert(list->head != NULL);
    int  maxVal;
    maxVal= list->head->data;
  
   for(Node *p = list->head->next; p!=NULL; p=p->next){
      if(maxVal < (p->data)) {
         maxVal = p->data;
      }

   }  
   return maxVal;
       
}




int smallestValue(LinkedList *list) {

  assert(list!=NULL);
  assert(list->head != NULL);

  int smallVal;
  smallVal= list->head->data;
 
  for(Node *p = list->head->next; p!=NULL; p=p->next){
      if(smallVal > (p->data)) {
          smallVal = p->data;
    }
  
 }
  return smallVal;

}



// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the sum of all values in the list.
// You may assume that list is not NULL
// However, the list may be empty (i.e. list->head may be NULL)
//  in which case your code should return 0.

int sum(LinkedList * list) {
  
    assert(list!=NULL);
    int sum = 0;
    if(list->head==NULL)
        return sum;

    else {
        for(Node *p = list->head; p!=NULL; p = p->next){
            sum+= p->data;
        }

   } 
  return sum;

 
}

