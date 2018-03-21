#include <iostream>
  
using namespace std;
  
int main()
{
	int n,x,y,v,out=0;
	cin>>n>>x>>y>>v;
	int prvo[n][n];
	int vtoro[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i%2==0){
				if(j%2==0){
					prvo[i][j]=0;
				}else{
					prvo[i][j]=1;
				}
			}else{
				if(j%2==0){
					prvo[i][j]=1;
				}else{
					prvo[i][j]=0;
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			vtoro[i][j]=0;
		}
	}
	for(int i=0,j=n-1;i<n;i++,j--){
		for(int g=0;g<=j;g++){
			vtoro[i][g]=1;
		}
	}
	if(prvo[x][y]==v&&vtoro[x][y]==v){
		out=3;
	}else if(prvo[x][y]==v){
		out=1;
	}else if(vtoro[x][y]==v){
		out=2;
	}else{
		out=4;
	}
	cout<<out;
	return 0;
}
