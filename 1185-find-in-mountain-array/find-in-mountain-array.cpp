/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    // Function to find the peak index of the mountain
    int peak(MountainArray& mountainArr) {
        int low = 0;
        int high = mountainArr.length() - 1;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (mountainArr.get(mid) < mountainArr.get(mid + 1)) {
                low = mid + 1; // Move towards the right half
            } else {
                high = mid; // Move towards the left half
            }
        }
        return low; // `low` will be the peak index when `low == high`
    }

    // Function to perform binary search (ascending or descending)
    int binary(int target, MountainArray& mountainArr, int low, int high, bool isAscending) {
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int midValue = mountainArr.get(mid);
            
            if (midValue == target) {
                return mid; // Found the target
            }

            if (isAscending) { // Ascending order
                if (midValue < target) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            } else { // Descending order
                if (midValue > target) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        return -1; // Target not found
    }

    int findInMountainArray(int target, MountainArray& mountainArr) {
        int peakIndex = peak(mountainArr); // Find the peak index

        // Search in the left part (ascending)
        int leftResult = binary(target, mountainArr, 0, peakIndex, true);
        if (leftResult != -1) {
            return leftResult; // Target found in the ascending part
        }

        // Search in the right part (descending)
        return binary(target, mountainArr, peakIndex + 1, mountainArr.length() - 1, false);
    }
};
