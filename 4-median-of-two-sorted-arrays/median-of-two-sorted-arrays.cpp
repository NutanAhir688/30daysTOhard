class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ma;
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), back_inserter(ma));

        int totalsize = ma.size();
        if (totalsize % 2 == 1) {
            return static_cast<double>(ma[totalsize / 2]);
        } else {
            return (ma[totalsize / 2 - 1] + ma[totalsize / 2]) / 2.0;
        }
    }
};
