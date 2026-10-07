class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> total;

        for(int i=0; i<nums.size(); i++){
            if(total.find(nums[i])!=total.end()){
                continue;
            }
            else{
                total[nums[i]]=0;
            }
        }

        for(int i=0; i<nums.size(); i++){
            total[nums[i]]++;
        }

        vector<int> result;
        vector<pair<int, int>> v(total.begin(), total.end());

        for (int i=0; i<v.size(); i++){
            for (int j=i+1; j<v.size(); j++){
                if(v[i].second < v[j].second){
                    swap(v[i], v[j]);
                }
            }
        }

        for(int i=0; i<k; i++){
            result.push_back(v[i].first);
        }
        return result;
    }
};
