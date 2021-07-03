class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int sum=0;
        
         sum=digits[n-1]+1;
        int carry;
        if(sum>9){
            digits[n-1]=0;
            carry=1;
        }
        else{
            digits[n-1]=sum;
            carry=0;
            
        }
        for(int i=n-2;i>=0;i--){
            if(carry!=0){
                sum=0;
                sum=digits[i]+1;
            }
            else{
                sum=digits[i];
            }
            if(sum>9){
                digits[i]=0;
            }else{
                digits[i]=sum;
                carry=0;
                break;
            }
        }
        if(digits[0]==0){digits.insert(digits.begin(),1);}
        return digits;
    }
};