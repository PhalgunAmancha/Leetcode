class Solution {
    public List<Integer> getRow(int rowIndex) {
        List<Integer> ansRow = new ArrayList<>();
        long ans = 1;
        ansRow.add((int) ans);
        for(int i = 1; i <= rowIndex; i++){
            ans = ans * (rowIndex - i + 1);
            ans = ans / i;
            ansRow.add((int) ans);
        }
        return ansRow;
    }
}