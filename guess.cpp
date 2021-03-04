#include <iostream>
using namespace std;
int main ()
{
  int iSecret, iGuess;
  /* initialize random seed: */
  srand (time(NULL));

  /* generate secret number between 1 and 10(both inclusive): */
  iSecret = rand() % 10 + 1;
  int count=0;
  
  do {
    cout<<"Guess the number (1 to 10): "<<endl;
    cin>>iGuess;
    count++;
    if (iSecret<iGuess) puts ("The secret number is lower");
    else if (iSecret>iGuess) puts ("The secret number is higher");
  } while (iSecret!=iGuess);
  cout<<"Congratulations!\nu took "<<count<<" attempts"<<endl;
  return 0;
}