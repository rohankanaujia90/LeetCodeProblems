class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        string s = to_string(x);
        string temp = s;

        reverse(temp.begin(), temp.end());

        return s == temp;

    }
};