#include<iostream>
#define loop(i,m,n) for(int i=m;i<n;i++)
#define lli long long 
#define endl "\n"
#define IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define FIO freopen("input.txt","r",stdin); //freopen("output.txt","w",stdout);
#define N 51
#define mod 1000000007
using namespace std;
void mul(lli (&a)[N][N],lli (&b)[N][N],int dim){
	lli r[N][N];
	loop(i,0,dim){
		loop(j,0,dim){
			r[i][j]=0;
			loop(k,0,dim)
				r[i][j] = (r[i][j] % mod + ((a[i][k] % mod) * (b[k][j] % mod) % mod)) % mod;
		}
	}
	loop(i,0,dim) loop(j,0,dim) a[i][j]=r[i][j]%mod;
}

void power(lli (&A)[N][N], lli pow,int dim){ //while passing the 2 array, also define the column dimension.
	lli res[N][N];
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
	loop(i,0,dim) loop(j,0,dim) A[i][j]=res[i][j]%mod;
}

void print(lli (&A)[N][N],int dim){
	loop(i,0,dim){
		loop(j,0,dim) cout<<A[i][j]%mod<<" ";
		cout<<"\n";
	}                           
}
int main(){
	IO,FIO;
	int t,dim;
	//multiplication of matrix i.e power M^2===M*m
	lli pow;
	lli base[N][N];
	cin>>t;
	while(t--){
		cin>>dim>>pow;
		loop(i,0,dim) loop(j,0,dim) cin>>base[i][j];
		power(base,pow,dim);
		print(base,dim);
	}	
}

/*
qn. link:- 
https://www.spoj.com/problems/MPOW/

input:-
2
2 3
1 0 
1 1 
3 3
1 0 4 
1 2 2 
0 4 4 

output:-
1 0 
3 1 
17 112 116 
15 88 100 
28 144 160 
*/                                         

	