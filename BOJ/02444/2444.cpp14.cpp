#include<bits/stdc++.h>

using namespace std;
int n, temp;
int main(){
	scanf("%d", &n);
	
	for(int i = 1; i<=n; i++)
	{
		for(int j = 0; j<n-i; j++)
			printf(" ");
		
		for(int j = 0; j<1+2*(i-1); j++)
			printf("*");
		printf("\n");
	}
	
	for(int i = n-1; i>=1; i--)
	{
		for(int j = 0; j<n-i; j++)
			printf(" ");
		
		for(int j = 0; j<1+2*(i-1); j++)
			printf("*");
		printf("\n");
	}
	
    return 0;
}