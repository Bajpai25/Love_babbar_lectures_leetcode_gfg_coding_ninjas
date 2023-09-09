class Solution {

private:
    bool ispossible(vector<int>& nums, int k , int mid){
        int partition=1;
        int partition_sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(partition_sum+nums[i]<=mid){
                partition_sum+=nums[i];
            }
            else{
                partition++;
                if(partition>k || nums[i]>mid){
                    return false;
                }
                partition_sum=nums[i];
            }
        }
        return true;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int s=0;
        int sum=0;
        int ans=-1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int e=sum;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(ispossible(nums,k,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
           mid=s+(e-s)/2; 
        }
        return ans;
    }
};