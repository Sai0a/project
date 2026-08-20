impl Solution {
    pub fn number_game(mut nums: Vec<i32>) -> Vec<i32> {
        nums.sort();
        let mut ans=Vec::with_capacity(nums.len());

        for i in (0..nums.len()).step_by(2) {
            ans.push(nums[i+1]);
            ans.push(nums[i]);
        }
        ans
    }
}