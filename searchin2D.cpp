#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<vector<int> > v = {
 {99, 89, 8, 11, 0},
    {1, 98, 45, 76, 999},
    {9, 67, 78, 58, 68},
    {79, 31, 21, 123, 29}
  };
  int item=878;
//---------------------------
  //FOR NON SORTED
  vector< vector<int> >::iterator row;
  for (row = v.begin(); row != v.end(); row++) {
        if(find(row->begin(), row->end(), item) != row->end() ){
            cout<<"found";
        }
    }
    
    // Iterator for the 2-D vector
    vector<vector<int>>::iterator it1;
 
    // Iterator for each vector inside the 2-D vector
    vector<int>::iterator it2;
 
    // Traversing a 2-D vector using iterators
    for(it1 = v.begin();it1 != v.end();it1++){
        for(it2 = it1->begin();it2 != it1->end();it2++)
            cout<<*it2<<" ";
        cout<<endl;
    } 
//---------------------------
  //FOR SORTED

  return 0;
}

