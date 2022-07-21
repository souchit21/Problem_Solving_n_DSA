#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int length(vector<int> &nums){
    sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<int> d;
    vector<int> count;
    int j=0;
    count[0] = 1;
    for(int i=0; i<n-1; i++){
        d[i] = nums[i] - nums[i+1];
        if(i!=0){
            if(d[i] == d[i-1]){
             count[j]++;
             //cout<<count[j];
            }
            else{
                j++;
                count[j] = 1;
            }
        }
    }
    //sort(count.begin(), count.end());
    return count[count.size()- 1];
}

int main(){
    vector<int> nums = {100,4,200,1,3,2};
   // cout<<length(nums);
   

}