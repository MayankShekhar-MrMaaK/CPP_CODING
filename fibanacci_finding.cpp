#include<iostream>
#define loop(i,m,n) for(int i=m;i<n;i++)
#define lli long long int
#define endl "\n"
#define IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FIO freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
#define mod 1000000007
using namespace std;

void mul(lli (&a)[2][2],lli (&b)[2][2],int dim){
	lli r[dim][dim];
	loop(i,0,dim){
		loop(j,0,dim){
			r[i][j]=0;
			loop(k,0,dim){
				lli x=(a[i][k]*b[k][j])%mod;
				r[i][j] = (r[i][j]+x)%mod;
			}	
		}
	}
	loop(i,0,dim) loop(j,0,dim) a[i][j]=r[i][j];
}

void power(lli (&A)[2][2], lli pow,int dim){ //while passing the 2 array, also define the column dimension.
	lli res[2][2];
	loop(i,0,dim){
		loop(j,0,dim){ 
			if(i==j) res[i][j]=1;
			else res[i][j]=0;
		}
	}	//identity matrix
						  
	while(pow){
		if(pow%2){
			mul(res,A,dim);
			pow--;
		}
		else{
			mul(A,A,dim);
			pow/=2;
		}
	}
	loop(i,0,dim) loop(j,0,dim) A[i][j]=res[i][j];
}

int main(){
	IO; FIO;
	int a,b,n,t;
	cin>>t;
	while(t--){
		cin>>a>>b>>n;
		if(n==1){
			cout<<b<<"\n";
		}
		else{
			lli mat[2][2]={{1,1},{1,0}};
			//[fn+1 fn]=mat^n-2 *[f1 f2]
			lli arr[2][1]={{b},{a}};
			int dim=2;
			power(mat,n-1,dim);
			lli res=(mat[0][0]*arr[0][0]+mat[0][1]*arr[1][0])%mod;
			cout<<res<<"\n";
		}
	}
}
/*
qn. link:-
https://www.hackerrank.com/challenges/fibonacci-finding-easy/problem

INPUT:
8  
2 3 1  
9 1 7  
9 8 3  
2 4 9  
1 7 2  
1 8 1  
4 3 1  
3 7 5 

OUTPUT:
3
85
25
178
8
8
3
44
*/

