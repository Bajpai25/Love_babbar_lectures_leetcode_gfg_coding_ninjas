Question :
567. Permutation in String Medium ::

Share
Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2.

 

Example 1:

Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba").
Example 2:

Input: s1 = "ab", s2 = "eidboaoo"
Output: false
 

Constraints:

1 <= s1.length, s2.length <= 104
s1 and s2 consist of lowercase English letters.


Code ::
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int arr[26]={0};
        for(char c:s1){
            arr[c-'a']++;
        }
        int i=0,j=0,total_char=s1.size();
        while(j<s2.size()){
            if(arr[s2.at(j++)-'a']-- >0){
                total_char--;
            }
            if(total_char==0){
                return true;
            }
            if(j-i == s1.size() &&  arr[s2.at(i++)-'a']++ >=0){
                total_char++;
            }
        }
        return false;
    }
};
