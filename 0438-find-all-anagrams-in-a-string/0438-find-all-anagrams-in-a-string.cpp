class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int arr[26]={0};
        for(char c:p){
            arr[c-'a']++;
        }
        vector<int>ans;
        int i=0,j=0,total_char=p.size();
        
        while(j<s.size()){
            if(arr[s.at(j++)-'a']-- >0){
                total_char--;
            }
            if(total_char==0){
                ans.push_back(i);
            }
            if(j-i ==p.size() && arr[s.at(i++)-'a']++ >=0){
                total_char++;
            }
        }
        return ans;
    }
        };
