#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    void move_Zeroes(vector<int>& nums){
        int n=nums.size();
        int i,j=0;
        for(i=0;i<n;i++){
            if(nums[i]==0){
                continue;
            }
            else{
                nums[j]=nums[i];
                j++;
 
            }
   
        }
        for(i=j;i<n;i++){
            nums[i]=0;

        }
        
    }



};
int main(){
    Solution s;
    int n;
    cout<<"eneter size of array : ";
    cin>>n;
    vector<int> nums(n);
    cout<<"eneter elements of array: "<<endl;
    int i;
    for(i=0;i<n;i++){
        cin>>nums[i];
    }
    s.move_Zeroes(nums);
    cout<<"desired sorted array is: "<<endl;
    for(i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

}