// 50ms: Set 
class Solution {
    public boolean containsDuplicate(int[] nums) {
        Set<Integer> set = Arrays.stream(nums).boxed().collect(Collectors.toSet());
        if (set.size() == nums.length) return false;
        return true;
    }
}


// 57ms : Optional
import java.util.OptionalInt;

class Solution {
    public boolean containsDuplicate(int[] nums) {
        Arrays.sort(nums);
        OptionalInt valueOptional = IntStream.range(0, nums.length - 1)
            .filter(i -> nums[i] == nums[i + 1])
            .findFirst();
        if (valueOptional.isPresent()) return true;
        return false;
    }
}