#include <iostream>
#include <cstring>
#include "node.h"
#include "student.h"

using namespace std;

int main() {
  //Testing
  //create student
  student* firstStudent = new student();
  student* secondStudent = new student();

  //create respective nodes
  node* firstNode = new node(firstStudent);
  node* secondNode = new node(secondStudent);

  //assign first nodes next node to be second node
  firstNode->setNext(secondNode);

  //read out GPAs
  cout << "First student's GPA: " << firstNode->getStudent()->getGPA() << endl;
  cout << "Second student's GPA: " << (secondNode->getStudent()->getGPA()) << endl;

  //check to make next node works
  if((firstNode->getNext()) == secondNode) {
    cout << "The next node after firstNode is secondNode" << endl;
  }
}
