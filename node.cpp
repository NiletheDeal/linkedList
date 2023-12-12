#include <iostream>
#include "node.h"

using namespace std;

//Constructor
node::node(student* newStudent) {
  stu = newStudent;
  next = NULL;
}

//Destructor
node::~node() {
  delete stu;
  next = NULL;
}

//Getters
node* node::getNext() {
  return next;
}

student* node::getStudent() {
  return stu;
}

//Setters
void node::setNext(node* n) {
  next = n;
}
