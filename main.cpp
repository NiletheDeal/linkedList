#include <iostream>
#include <cstring>
#include "node.h"
#include "student.h"

using namespace std;

int main() {
  //Testing

  student* firstStudent;
  student* secondStudent;

  node* firstNode = new node(firstStudent);
  node* secondNode = new node(secondStudent);

  firstNode->setNext(secondNode);

  cout << "First student's GPA: " << firstNode->getStudent()->getGPA() << endl;
  cout << "Second student's GPA: " << (secondNode->getStudent()->getGPA()) << endl;

  if((firstNode->getNext()) == secondNode) {
    cout << "The next node after firstNode is secondNode" << endl;
  }
}
