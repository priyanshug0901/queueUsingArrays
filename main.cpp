#include <iostream>
#include "UsingArrays.h"
using namespace std;


int main() {
UsingArrays <int> q(5);
q.enqueue(10);
q.enqueue(20);
q.enqueue(30);
 q.enqueue(40);
q.enqueue(50);
// q.enqueue(60);
cout<<" "<<q.dequeue()<<" "<<q.dequeue()<<" "<<q.dequeue()<<" "<<q.dequeue()<<" "<<q.dequeue();
cout<<" "<<q.front();

}