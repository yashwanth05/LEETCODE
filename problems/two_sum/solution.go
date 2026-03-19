import "fmt"

func twoSum(nums []int, target int) []int {
    intMap := make(map[int]int)
    for i:=0; i<len(nums); i++ {
        complement := target - nums[i];
        value, ok := intMap[complement]
        if ok {
            return []int{value,i}
        }
        intMap[nums[i]] = i
    }
    return []int{}
}