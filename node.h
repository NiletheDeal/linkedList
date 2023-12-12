#ifndef NODE_H
#define NODE_H
#include <iostream>
#include "student.h"

using namespace std;
class node {
 public:
  //constructor (and the student assigned to the node)
  node(student* newStudent);
  //destructor
  ~node();
  //get the next node in the list
  node* getNext();
  //Get the student that is assigned to the node
  student* getStudent();
  //Set the next node in the list
  void setNext(node* n);
 private:
  //Variables
  node* next;
  student* stu;
};
#endif
