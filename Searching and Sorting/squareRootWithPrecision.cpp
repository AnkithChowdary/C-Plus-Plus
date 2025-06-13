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
    double myPrecision(int n){
        double sqrt=mySqrt(n);
        int precison=13;
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
  int n;
  cin>>n;
  int ans=mySqrt(n);
  double ansPre=myPrecision(n);
  cout<<"Without Precision Sqrt of "<<n<<"is: "<<ans<<endl;
  cout<<"With Precision Sqrt of "<<n<<"is ";
  printf("%.13f",ansPre);
  return 0;
}