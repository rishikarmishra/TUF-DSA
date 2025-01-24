//Problem: Print from 1 to N using Recursion

#include <iostream>
using namespace std;
void printN(int i ,int n){
  if(i > n){
    return;
  }
  cout<<i<<" ";
  printN(i+1,n);
}
int main() {
    int n;
    cin>>n;
    printN(1,n);
    return 0;
}