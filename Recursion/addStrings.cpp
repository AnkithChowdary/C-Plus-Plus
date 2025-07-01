class Solution {
public:

    void add(string num1,int n1,string num2,int n2,string &ans,int carry){
        if(n1<0&&n2<0){
            if(carry!=0)
            {
                ans.push_back(carry+'0');
            }
            return;
        
        }
      int nbr1=(n1>=0?num1[n1]:'0')-'0';
      int nbr2=(n2>=0?num2[n2]:'0')-'0';


      int cSum=nbr1+nbr2+carry;
      int digit=cSum%10;
      carry=cSum/10;
      ans.push_back(digit+'0');
      add(num1,n1-1,num2,n2-1,ans,carry);


    }
    string addStrings(string num1, string num2) {
        string ans="";
        add(num1,num1.size()-1,num2,num2.size()-1,ans,0);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};