#include <iostream>
#include <vector>
using namespace std;
int main(){
    long n,n1=0,n2=1,n3=0;
    cin>>n;
    vector<int> arr;
    long count=0;
    while(!(n3>=n)){// fibonaci series
        n3=n1+n2;   
        n1=n2;    
        n2=n3;
        count+=1;
    }

    cout<<"dfd"<<count-2;
    return 0;
}
/*
Monica is a lagendary player of badminton. She is going to participate in a Knockout - Badminton tournament with n - 1 other players.

The organising committee are still deciding the order in which the games will happen and which team player is going to play with who. But they have already stated one rule:

Two player standoff if and only if the absolute difference of number of games played is atmost one.

So one thing is clear that both players had to attain victory in all of their matches in order to continue participating in the tournament.

Since the tournament has not started yet and Monica was being bored sitting and making faces she thought what will be the highest number of matches she will have to play if she is going to win the tournament. As you know Monica is poor in mathematics she asks for your help to solve the problem.(Of course she thinks you can do it !!)

Input:

The only line contains an integer n, the number of participants in badminton tournament.

Output:

Print the highest number of matches in which Monica (the final winner) can take part in.

Contraints:


2
≤
n
≤
10
18

SAMPLE INPUT:

Input
2
Output
1

Input
3
Output
2

Input
4
Output
2

Input
10
Output
4

EXPLAINATION:

NOTE: In all samples we consider that player number 1 is the Monica.

In the first sample, there would be only one game so the answer is 1.
In the second sample, player 1 can consequently beat players 2 and 3.
In the third sample, player 1 can't play with each other player as after he plays with players 2 and 3 he can't play against player 4, as he has 0 games played, while player 1 already played 2. Thus, the answer is 2 and to achieve we make pairs (1,2) and (3,4) and then clash the winners.
Figure out the fourth sample yourself. :P
*/