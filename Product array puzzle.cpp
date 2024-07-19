

class Solution{
  public:
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        //code here
        if (n == 1) 
        return {1};
            vector<long long int>left(n,1);
            vector<long long int>right(n,1);
            vector<long long int>result(n,1);
            for(int i=1; i<n; i++)
                left[i] = left[i-1]*nums[i-1];
            for(int i=n-2; i>=0; --i)
                right[i] = right[i+1]*nums[i+1];
            for(int i=0; i<n; i++)
                 result[i]  = left[i]*right[i];
        return result;
    }
};