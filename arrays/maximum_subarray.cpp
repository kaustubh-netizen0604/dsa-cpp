#include <iostream>
#include <vector>
#include<limits.h>
using namespace std;
class Solution {
public:
    int maxSubarray(vector<int>& nums) {
        int sum=0,i,k=INT_MIN;
        for(i=0;i<nums.size();i++){
            sum+=nums[i];
            k = max(k,sum);
            if(sum<0)sum=0;  
        }
        return k;
    }
};
int main(){
    Solution s;
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cout<<"maximum sum of sub array is : ";
   cout<< s.maxSubarray(nums)<<endl;
    return 0;
}


