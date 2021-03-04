#include<iostream>
using namespace std;
int factorial(int n){
  if(n > 1)
    return n * factorial(n - 1);
  else
    return 1;
}
int main()
{
  int n,k;
  cin>>n>>k;
  int A[n];
  int g=0;
  for(int i=0;i<n;i++){
    cin>>A[i];
    if(A[i]%2==0)
      g++;
  }
  cout<<factorial(g)/(factorial(k)*factorial(g-k))<<endl;
return 0;
}