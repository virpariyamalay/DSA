// class Solution {
// public:
//     bool isPalindrome(string s) {
//         return check(s, 0, s.size() - 1);
//     }
//     //creating my self
//     bool check(string& s, int l, int r) {
//         while (l < r && !isalnum(s[l])) l++;  
//         while (l < r && !isalnum(s[r])) r--;  

//         if (l >= r) return true;  

//         if (tolower(s[l]) != tolower(s[r])) return false;

//         return check(s, l + 1, r - 1); 
//     }
// };

