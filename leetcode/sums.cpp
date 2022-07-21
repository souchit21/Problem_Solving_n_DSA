#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
 vector<int> twoSum(vector<int> &nums, int target) {
        vector<int> r;
        bool t =0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n ; j++){
                if(nums[j] == target - nums[i]){
                   r.push_back(i);
                   r.push_back(j);
                   t=1;
                }
        }
        if(t == 1){
            break;
        }
        }
        return r;
    }
int main(){
    int n;
    cin>>n;
    vector<int> num(n);
    int temp;
    int target;
    for(int i=0; i<n; i++){
        cin>>temp;
        num.push_back(temp);
    }
    cin>>target;
    vector<int> s = twoSum(num, target);
    vector<int>::iterator it;

    for(it=s.begin(); it!=s.end();it++){
        cout<<*it<<" ";
    }
    //cout<<twoSum(num, target);

}