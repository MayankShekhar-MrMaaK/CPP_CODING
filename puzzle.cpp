/*How to check if an instance of 15 puzzle is solvable?
Difficulty Level : Hard
 Last Updated : 05 Oct, 2020
Given a 4×4 board with 15 tiles (every tile has one number from 1 to 15) and one empty space. The objective is to place the numbers on tiles in order using the empty space. We can slide four adjacent (left, right, above and below) tiles into the empty space.
*/
#include<iostream>
#define N 4
using namespace std;
int getInvCount(int arr[])
{
	int inv_count = 0;
	for (int i = 0; i < N * N - 1; i++)
	{
		for (int j = i + 1; j < N * N; j++)
		{
			if (arr[j] && arr[i] && arr[i] > arr[j])
				inv_count++;
		}
	}
	return inv_count;
}
int findXPosition(int puzzle[N][N])
{
	for (int i = N - 1; i >= 0; i--)
		for (int j = N - 1; j >= 0; j--)
			if (puzzle[i][j] == 0)
				return N - i;
}
bool isSolvable(int puzzle[N][N])
{
	int invCount = getInvCount((int*)puzzle);
	if (N & 1)
		return !(invCount & 1);
	else
	{
		int pos = findXPosition(puzzle);
		if (pos & 1)
			return !(invCount & 1);
		else
			return invCount & 1;
	}
}
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int arr[4][4];
        for(int x=0;x<4;x++){
            for(int y=0;y<4;y++){
                cin>>arr[x][y];
            }
        }
        isSolvable(arr)? cout << "Solvable":
						cout << "Not Solvable";
    }
    return 0;
}