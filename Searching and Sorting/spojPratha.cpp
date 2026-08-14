#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool isPossible(vector<int>& cooksRanks,int orders,int mid){
	int currP=0; // Initial cooked prata count;
	for(int i=0;i<cooksRanks.size();i++){
	
		int rank=cooksRanks[i],j=1;
		int timeTaken=0;
		while(timeTaken+rank*j<=mid){
				currP++;
				timeTaken+=j*rank;
				j++;
			if(currP>=orders){
			return true;
		}
		}
		
		
	}
	return false;
}


int main() {
	// your code goes here
	int tc;
	cin>>tc;
	while(tc-->0){
	int orders,cooks;
		cin>>orders>>cooks;
	vector<int>cooksRanks(cooks);

	for(int i=0;i<cooks;i++){
		cin>>cooksRanks[i];
	}
	int ans=-1;
	int si=0;
	
	int ei=*max_element(cooksRanks.begin(),cooksRanks.end())*(orders*(orders+1))/2;
	while(si<=ei){
		int mid=((ei-si)/2)+si;
		if(isPossible(cooksRanks,orders,mid)){
			ans=mid;
			ei=mid-1;      // Minimize time
		}else{
			si=mid+1;
		}
	}
	cout<<ans<<endl;
	}
	return 0;
}