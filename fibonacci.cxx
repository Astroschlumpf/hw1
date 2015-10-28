#include <iostream>
using namespace std;

int main(){
  int n, fibo = 0;
  
  cout << "Fibonacci-Zahl fuer Zahl n \n Eingabe der Zahl n: ";
  cin >> n;
  cout << "Berechnung...\n";
  
  if((n > 0) && (n < 3)){
    fibo++; // Spezialfall fuer n=1 oder n=2; n<=0 ist mit fibo=0 abgedeckt
  }
  else if(n > 2){
    int a = 0, b = 1; // Fibonacci fuer i-2 und i-1
    for(int i = 1; i < n; i++){
      int fia = b; int fib = a + b; // Werte zu i-1 und i selbst
      a = fia; b = fib; // Werte fuer naechsten Durchlauf uebergeben
    }
    fibo = b; // letzte Summe uebergeben
  }
  
  cout << "Die Fibonacci-Zahl zu n ist: " << fibo << endl;
  
  return 0;
}
