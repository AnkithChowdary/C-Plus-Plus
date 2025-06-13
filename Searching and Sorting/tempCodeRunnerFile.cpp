#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int>& treeH,int& woodReq,int& mid){
	int woodCutted=0;
	for(int i=0;i<treeH.size();i++){
		
		  woodCutted+=(treeH[i]>=mid)?treeH[i]-mid:0;
		
		
		
	if(woodCutted>=woodReq)  // If we have enough wood, we can stop checking further
		return true;
}
return woodCutted>=woodReq;
}


int main() {
	// your code goes here
	int treeC,woodReq;
	cin>>treeC>>woodReq;
	vector<int>treeH(treeC);
	for(int i=0;i<treeC;i++)
	{
		cin>>treeH[i];
	}
	sort(treeH.begin(),treeH.end());
	int si=0,ei=treeH[treeC-1];
	int ans=-1;
	while(si<=ei){
		int mid=(ei+si)>>1;
		if(isPossible(treeH,woodReq,mid)){
			ans=mid;
			si=mid+1;    // We minimize the wood cutting 
		}else{
			ei=mid-1;
		}
	}
	cout<<ans;
	return 0;
}