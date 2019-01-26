// 49ms
class Solution {
    public int thirdMax(int[] nums) {
        Set<Integer> set = Arrays.stream(nums).boxed().collect(Collectors.toSet());
        List<Integer> list = new ArrayList<Integer>(set);
        Collections.sort(list);
        if (list.size() >= 3) return list.get(list.size() - 3);
        else return list.get(list.size() - 1);
    }
}