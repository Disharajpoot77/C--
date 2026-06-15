class Solution {
public:
    int findPlatform(vector<int>& Arrival, vector<int>& Departure) {
        int n = Arrival.size();

        sort(Arrival.begin(), Arrival.end());
        sort(Departure.begin(), Departure.end());

        int i = 1, j = 0;
        int platforms = 1;
        int ans = 1;

        while (i < n && j < n) {
            if (Arrival[i] <= Departure[j]) {
                platforms++;
                ans = max(ans, platforms);
                i++;
            }
            else {
                platforms--;
                 j++;
            }
        }

        return ans;
    }
};