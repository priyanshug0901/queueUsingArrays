#include <iostream>
using namespace std;
template <typename T>
class UsingArrays{
public:
 int size,
 ni,
 fi;
 T* data,
 capacity;

public:
UsingArrays(int s){
  data= new T[s];
   size=0,
  ni=0,
  fi=-1,
  capacity=s;
}

int getSize(){
  return size; 
}

bool isEmpty(){
  return size==0;
}

void enqueue(T element){
  if(size==capacity)
    return;
data[ni]=element;
size++;
ni=(ni+1)%capacity;
if(fi<0)
fi=0;
}

T front(){
  if(size>0){
  int ans=data[fi];
  return ans ;
  }
  else
  return -1;
}

T dequeue(){

  if(size>0){
  T ans=data[fi];
  fi=(fi+1)%capacity;
  size--;
  return ans;
  }
  return -1;


}

















};