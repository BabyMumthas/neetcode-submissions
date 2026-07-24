class Solution {
public:
    int search(vector<int>& nums, int target) {

        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {

            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                return mid;
            }

            else if (target > nums[mid]) {
                left = mid + 1;
            }

            else {
                right = mid - 1;
            }
        }

        return -1;
    }
};

/*Memory Trick

Whenever you see:

Sorted Array
Find Target
O(log n)

Immediately think:

Binary Search

left = 0
right = n-1

while(left <= right)
{
    mid

    found -> return

    bigger -> go right

    smaller -> go left
}
One-line Interview Memory
Sorted + O(log n) = Binary Search*/
