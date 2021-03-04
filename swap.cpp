#include <iostream>
using namespace std;
// function definition to swap values
void swap1(int &n1, int &n2) {
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}
void swap2(int* n1, int* n2 ){
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}
int main()
{
    cout<<"\nREFERENCE"<<endl;
    int a = 1, b = 2;
    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    // call function to swap numbers
    swap1(a, b);
    cout << "After swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout<<"\nPOINTER"<<endl;
    int x=3,y=4;
    cout << "Before swapping" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    swap2(&x, &y);
    cout << "After swapping" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}