class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        for(int x = 0; x <= num; x++){
            string s = to_string(x);
            reverse(s.begin(), s.end());

            int rev = stoi(s);
            if(x + rev == num){
                return true;
            }
        }
        return false;
    }
};