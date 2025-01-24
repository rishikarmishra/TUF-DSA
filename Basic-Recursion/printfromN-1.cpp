//Problem: Print from N to 1 using Recursion

#include <iostream>
using namespace std;
void printN(int i ,int n){
  if (i<1){
    return;
  }
  cout<<i<<" ";
  printN(i-1,n);
}
int main() {
    int n;
    cin>>n;
    printN(n,n);
    return 0;
}