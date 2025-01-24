//Problem: Print your Name N times using recursion

#include <iostream>
using namespace std;
void printName(int i ,int N){
  if(i > N ){
    return;
  }
  cout<<"Rishu ";
  printName(i + 1 ,N);
}
int main() {
    int n;
    cin>>n;
    printName(1,n);
    return 0;
}