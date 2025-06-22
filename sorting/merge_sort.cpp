
class Solution {
public:
    void ms(vector<int> &nums,int low,int high){
        if(low == high) return;
        int mid=(low+high)/2;
        ms(nums,low,mid);
        ms(nums,mid+1,high);
        merge(nums,low,mid,high);
    }

    void merge(vector<int> &nums,int low,int mid,int high){
        vector<int> v;
        //[low..mid],
        //[mid+1..high]
        int left=low;
        int right=mid+1;

        while(left<=mid && right<=high){
            if(nums[left]<nums[right]){
                v.push_back(nums[left]);
                left++;
            }
            else{
                v.push_back(nums[right]);
                right++;
            }
        }

        while(left<=mid){
            v.push_back(nums[left]);
            left++;
        }

        while(right<=high){
            v.push_back(nums[right]);
            right++;
        }

        for(int i=low;i<=high;i++){
            nums[i]=v[i-low];
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();

        ms(nums,0,n-1);

        return nums;
    }
};