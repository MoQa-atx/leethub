public class Solution {
    public bool ContainsDuplicate(int[] nums) {
        if (nums == null || nums.Length <= 1) return false;

        int min = nums[0], max = nums[0];
        for (int i = 1; i < nums.Length; i++) {
            if (nums[i] < min) min = nums[i];
            else if (nums[i] > max) max = nums[i];
        }

        if (max - min + 1 < nums.Length) return true;

        if (max - min < 2000000) {
            bool[] seen = new bool[max - min + 1];
            for (int i = 0; i < nums.Length; i++) {
                int index = nums[i] - min;
                if (seen[index]) return true;
                seen[index] = true;
            }
            return false;
        }

        HashSet<int> set = new();
        for (int i = 0; i < nums.Length; i++) {
            if (!set.Add(nums[i])) return true;
        }
        return false;
    }
}
