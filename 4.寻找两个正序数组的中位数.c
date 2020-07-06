/*
 * @lc app=leetcode.cn id=4 lang=c
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start


double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int n1 = nums1Size,n2 = nums2Size;
    if(n1 > n2)
        return findMedianSortedArrays(nums2,n2,nums1,n1);
    
    if(n1 == 0)
        return( ( (double) nums2[(n2-1)/2] + (double) nums2[n2/2]) / 2);
    int MAX = 0x80000000;
    int MIN = 0x7fffffff;

    int size = n1 + n2;
    int cutL = 0 , cutR = n1;
    int cut1 = n1 / 2;
    int cut2 = size - cut1;

    while(cut1 < n1){
        cut1 = (cutR - cutL) / 2 + cutL;
        cut2 = size / 2 - cut1;

        double L1 = (cut1 == 0) ? MIN : nums1[cut1 - 1];
        double L2 = (cut2 == 0) ? MIN : nums2[cut2 - 1];
        double R1 = (cut1 == n1) ? MAX : nums1[cut1];
        double R2 = (cut2 == n2) ? MAX : nums2[cut2];
        if (L1 > R2)
            cutR = cut1 - 1;
        else if (L2 > R1)
            cutL = cut1 + 1;
        else {// Otherwise, that's the right cut.
            if (size % 2 == 0) {// 偶数个数的时候
                L1 = (L1 > L2 ? L1 : L2);
                R1 = (R1 < R2 ? R1 : R2);
                return (L1 + R1) / 2; 
            }else{
                R1 = (R1 < R2 ? R1 : R2);       
                return R1; 
            }
        }
    }
    return -1;
}

// @lc code=end

