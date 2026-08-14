#include<iostream>
using namespace std;
int mySqrt(int x) {
        int s=0;
        int e=x;
        int ans=-1;
        long long int mid=s+(e-s)/2;
        while(s<=e){
            long long prod=mid*mid;
            if(prod==x)
            return mid;
            else if(prod<x)
            {
                ans=mid;
                s=mid+1;
            }else{
               e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
    double myPrecision(int n,int k){
        double sqrt=mySqrt(n);
        int precison=k;
        double step=0.1;
        while(precison--){
          double j=sqrt;
          while(j*j<=n){
            sqrt=j;
            j+=step;
          }
          step/=10;
        }
        return sqrt;
        
    }
int main(){
  int n,k;
  cin>>n>>k;
  int ans=mySqrt(n);
  double ansPre=myPrecision(n,k);
  cout<<"Without Precision Sqrt of "<<n<<" is: "<<ans<<endl;
  cout<<"With Precision Sqrt of "<<n<<" is ";
  printf("%.*f\n",k,ansPre);
  return 0;
}