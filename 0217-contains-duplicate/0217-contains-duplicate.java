import java.util.HashMap;

class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashMap<Integer, Integer> hp = new HashMap<>();
        // Count occurrences of each number
        for (int x : nums) {
            hp.put(x, hp.getOrDefault(x, 0) + 1);
        }
        // Check if any number has more than one occurrence
        for (int value : hp.values()) {
            if (value > 1) {
                return true;
            }
        }
        return false;
    }
}
