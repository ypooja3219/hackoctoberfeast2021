#include<bits/stdc++.h>
using namespace std;
int calc_bits(int num)
{
	int cnt=0;
	while((num&(num-1)) !=0){
		num=num&(num-1);
		cnt++;
		
	}
	return cnt+1;
 
}
 
int main()
{
	int n;
	cin>>n;
	while(n--){
		int num;
		cin>>num;
		cout<<calc_bits(num)<<"\n";
	}
 
 
}
