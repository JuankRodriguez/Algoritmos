#include"charstack1.hpp"
#include<iostream>
using namespace std;

int main(){
  CharStack myStack;

  for(int i = 65; i < 78; ++i) {
    myStack.push(char(i));
    cout << char(i) << endl;
  }
  //cout << myStack.empty() << endl;
  cout << myStack.top() << endl;

  /*int mx = myStack.size();
  for(int i = 0; i < mx; ++i) cout << myStack.pop() << " ";
  cout << endl;

  if(myStack.empty()) cout << "stack is empty" << endl;

  cout << myStack.top() << endl;*/

  return 0;
}
