class Solution {
    
    private:
        bool ispossible(vector<int>& weights, int days,int mid){
            int time_days=1;
            int weights_sum=0;
            int n=weights.size();
            for(int i=0;i<n;i++){
                if(weights_sum + weights[i]<=mid){
                    weights_sum+=weights[i];
                }
                else{
                   time_days++;
                    if(time_days>days || weights[i]>mid ){
                        return false;
                    }
                    weights_sum=weights[i];
                }
            }
            return true;
        }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int s=0;
        int sum=0;
        int ans=-1;
        int n=weights.size();
        for(int i=0;i<n;i++){
            sum+=weights[i];
        }
        int e=sum;
        int mid=s+(e-s)/2;
        while(s<=e){
            if( ispossible(weights,days,mid)){
                ans=mid;
                e=mid-1;
            }
            else
            {
                s=mid+1;
                }
            mid=s+(e-s)/2;
        }
        return ans;
    }
};
