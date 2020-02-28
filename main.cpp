#include <iostream>
using namespace std;

int RecursiveSumFirstNPosInt(int n){
  if (n <= 1){
    return n;
  }
  return n + RecursiveSumFirstNPosInt(n -1);
}
int RecursiveSumOfSquaresFirstNPosInt(int n){
  if (n <= 1){
    return n;
  }
  return (n * n) + RecursiveSumOfSquaresFirstNPosInt(n - 1);
}
int RecusiveSumElementsOfArray(int A[], int n) 
{ 
    if (n <= 0){ 
        return 0; 
    }
    return A[n - 1] + RecusiveSumElementsOfArray(A, n - 1); 
} 
int RecursiveFindMaxElementOfArray(int A[], int n) 
{ 
    if (n == 1) 
        return A[0]; 
    return max(A[n-1], RecursiveFindMaxElementOfArray(A, n-1)); 
} 
int RecursiveFactorial(int n) 
{ 
    if (n == 0) 
    return 1; 
    return n * RecursiveFactorial(n - 1); 
} 
int RecursiveNChooseK(int n, int k)
{
  if (k == 1){
  return n;
  }
  else if (n == k){
  return 1;
  }
  else {
  return(RecursiveNChooseK(n-1, k) +
  RecursiveNChooseK(n-1, k-1));
  }
} 
int RecursiveFibonacci(int n) {  
  if(n == 0) {    
    return 0;
  }  
  if(n == 1) {    
    return 1;
  }  
  else {    
    return RecursiveFibonacci(n-1) + RecursiveFibonacci(n-2);
  }
}
int RecursiveGCD(int a, int b) 
{ 
  if (b == 0){ 
    return a;
  }
  return RecursiveGCD(b, a % b);  
}
int RecursiveLogBase2(int n) {
  if (n < 2){
       return 0;
  }
  return 1 + RecursiveLogBase2(n / 2);
}
int main() {
  char choice;
  bool go = true;
  int n;
  int k;
  int a;
  int b;
  int A[] = {23, 5, 6, 50, 60, 70, 85, -2, 34, 50, 100, 12, 16, 30, 9};
  cout << "                                  OPTIONS\n";
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
  cout << "1: A recursive function that returns the sum of the first n positive integers.\n";
  cout << "2: A recursive function that returns the sum of the squares of the first n positive integers.\n";
  cout << "3: A recursive function that returns the sum of the first n elements of an array.\n";
  cout << "4: A recursive function that returns the maximum among the first n elements of an array.\n";
  cout << "5: A recursive function that returns the factorial of a positive integer.\n";
  cout << "6: A recursive function that returns ‘n-choose-k’: Choose k items from a set of n items\n";
  cout << "7: A recursive function that returns the Fibonacci sequence 1, 1, 2, 3, 5, 8, 13... up to user specified n terms\n";
  cout << "8: A recursive function that returns the GCD of two positive integers.\n";
  cout << "9: A recursive function that returns the integer binary logarithm of an integer n (i.e., the number of times n can be divided in two).\n";
  cout << "E: Exit program.\n\n";
  do{
    cout << "Please enter choice from the list above: ";
    cin >> choice;
    cout << "\n";
    switch (choice){
      case '1':  
        cout << "Please choose a number to represent n: ";
        cin >> n;
        cout << "\nSUM = " << RecursiveSumFirstNPosInt(n) << "\n\n";
        break; 
      case '2':
        cout << "Please choose a number to represent n: ";
        cin >> n;
        cout << "\nSUM = " << RecursiveSumOfSquaresFirstNPosInt(n) << "\n\n";
        break; 
      case '3':
        cout << "Please choose a number to represent n: ";
        cin >> n;
        cout << "\nSUM = " << RecusiveSumElementsOfArray(A, n) << "\n\n";
        break; 
      case '4':
        cout << "Please choose a number to represent n: ";
        cin >> n;
        cout << "\nSUM = " << RecursiveFindMaxElementOfArray(A, n) << "\n\n";
        break; 
      case '5':
        cout << "Please choose a number to represent n: ";
        cin >> n;
        cout << "\nSUM = " << RecursiveFactorial(n) << "\n\n";
        break;  
      case '6':
        cout << "Please choose a number to represent n: ";
        cin >> n;
        cout << "Please choose a number to represent k: ";
        cin >> k;
        cout << "\nSUM = " << RecursiveNChooseK(n, k) << "\n\n";
        break;
      case '7':
        cout << "Please choose a number to represent n: ";
        cin >> n;
        cout << "\nSUM = " << RecursiveFibonacci(n) << "\n\n";
        break;
      case '8':
        cout << "Enter your first number: ";
        cin >> a;
        cout << "\nEnter your second number: ";
        cin >> b;
        cout << "\nGCD = " << RecursiveGCD(a, b) << "\n\n";
        break;
      case '9':
        cout << "Please choose a number to represent n: ";
        cin >> n;
        cout << "\nSUM = " << RecursiveLogBase2(n) << "\n\n";
      case 'E':  
      case 'e':
        cout << "Thanks for using this program :-)\n"; 
        go = false;
        break; 
      default:  
        cout << "Your entry does not match the option abailable.\n"; 
        break;   
    }
  }while(go);
  return 0;
}
