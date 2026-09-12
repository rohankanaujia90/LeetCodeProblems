class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> max(candies.size());

        int largest = candies[0];

        for(int i = 1; i < candies.size(); i++) {
            if(candies[i] > largest) {
                largest = candies[i];
            }
        }

        for(int i = 0; i < candies.size(); i++) {
            if(candies[i] + extraCandies >= largest) {
                max[i] = true;
            } else {
                max[i] = false;
            }
        }

        return max;
    }
};