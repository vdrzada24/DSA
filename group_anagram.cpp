class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string,vector<string>> mp;

        for(string s:strs){
            string s1 = s;
            sort(s1.begin(),s1.end());
            mp[s1].push_back(s);
        }

        map<string,vector<string>> :: iterator it = mp.begin();

        while(it!=mp.end()){
            ans.push_back(it->second);
            ++it;
        }

        return ans;

        
    }
};