#include <iostream>
#include <cstring>
#include <vector>
#include "node.h"

using namespace std;

Node::Node(Student* student){
  next = NULL;
}

void Node::setNext(Node* node){
}

Node* Node::getNext(){
  return next;
}

Node::~Node(){
}

