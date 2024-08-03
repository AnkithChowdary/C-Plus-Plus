#include<iostream>
#include<vector>
using namespace std;

void isPrime(int n,vector<bool>&v){
  v[0]=v[1]=false;
  for(int i=2;i<=n;i++){
    if(v[i]){
    int j=2*i;
    while(j<=n){
      v[j]=false;
      j+=i;
    }
    }
  }
}
// Optimized Code
void isPrime1(int n,vector<bool>&v){
    v[0]=v[1]=false;
    for(int i=2;i<=n;i++){
      if(v[i]){
        int j=i*i;
        while(j<=n){
          v[j]=false;
          j+=i;
        }
      }
    }
}
  
int main() {
  int n;
  cin >> n;
  vector<bool>tprimes(n+1,true);
  isPrime(n,tprimes);
  for(int i=2;i<=n;i++){
      if(tprimes[i]){
        cout << i << " ";
      }
  }
  cout << endl;
  vector<bool>primes(n+1,true);
  isPrime1(n,primes);
  for(int i=2;i<=n;i++){
      if(primes[i]){
        cout << i << " ";
      }
  }

}