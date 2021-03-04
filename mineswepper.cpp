#include <iostream>
#include <vector>
using namespace std;


//void updated(vector<vector<int> > &arr(10,vector<int>(10))){
void up(int arr[10][10]){
}


int main(){
    //vector<vector<int> > arr(10,vector<int>(10));
    int arr[10][10];
    up(arr);
    srand(time(NULL));//seed for random
    int x=0, y=0;
    bool flag=false;
    //PLANT MINES
    for(int i=0;i<=10;i++){
        x =rand() % 10; // random[0,9]
        y= rand() % 10;
        if(arr[x][y]==1){
            continue;
        }
        arr[x][y]=1;
    }
     for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //-------------------------
    //TAKING USER INPUT
    while(true){
    cout<<"Enter the block"<<endl;
    while(true){
        cin>>x>>y;
        if(x>=0 && x<=10 && y>=0 && y<=10){
            break;
        }
        else{
            cout<<"Please enter within block in range of 10"<<endl;
        }
    }
    //--------------------------
    //Check for Mine else update version
    if(arr[x][y]==1  ){//|| find(arr.begin(),arr.end(),0)==arr.end()
        arr[x][y]=-1;
        cout<<"OOPS! U landed on Mine,,BOOM";
        break;
    }
    else{//Update vector
        //updated(arr);

    }
    cout<<x<<" "<<y<<endl;    
    }  
}
//Algorithm