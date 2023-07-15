#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
		vector<int> twSum(vector<int> &nums, int target) {
			unordered_map<int, int> numToIndex;

			for (int i = 0; i < nums.size(); ++i) {
				if (const auto it = numToIndex.find(target - nums[i]); it != numToIndex.end()) {
					return {it->second, i};
				}
				numToIndex[nums[i]] = i;
			}
			throw;
		}
};
int main() {
	return 0;
}