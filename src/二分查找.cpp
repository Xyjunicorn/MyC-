#include <iostream>
#include <vector>

using namespace std;

int search(vector<int>& nums, int target)
{
	int left = 0;
	int right = nums.size();

	while (left<right)
	{
		int mid = left + (right - left) / 2;

		if (nums[mid] == target) {
			return mid;
		}
		else if (nums[mid] < target) {
			left = mid + 1;   // 目标在右半部分
		}
		else {
			right = mid - 1;  // 目标在左半部分
		}
	}
	return -1;
}