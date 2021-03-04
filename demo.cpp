#include<iostream>
#include <vector>
using namespace std;
int &fun()
{
    static int x = 10;//if not static, then segment fault.
    return x;
}
int main()
{	int arr[5]={1,5,-1,4,2};
    fun() = 30;
    cout << fun();//30
    
    std::vector<int> v(arr,arr+(sizeof(arr)/sizeof(arr[0])));
    
    for(int i:v){
    	cout<<i<<" "<<endl;
    }

    return 0;
}