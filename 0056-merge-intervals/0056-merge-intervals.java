import java.util.*;

class Solution {
    public int[][] merge(int[][] intervals) {
        int n = intervals.length;

        // Sort based on the start time
        Arrays.sort(intervals, (a, b) -> Integer.compare(a[0], b[0]));

        List<int[]> ans = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            int start = intervals[i][0];
            int end = intervals[i][1];

            // If the list is not empty and the interval is already covered
            if (!ans.isEmpty() && end <= ans.get(ans.size() - 1)[1]) continue;

            // Merge overlapping intervals
            for (int j = i + 1; j < n; j++) {
                if (intervals[j][0] <= end) {
                    end = Math.max(end, intervals[j][1]);
                } else {
                    break;
                }
            }

            ans.add(new int[]{start, end});
        }

        // Convert List<int[]> to int[][]
        return ans.toArray(new int[ans.size()][]);
    }
}
