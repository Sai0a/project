impl Solution {
    pub fn first_uniq_char(s: String) -> i32 {
        let mut freq=vec![0;26];

        for ch in s.chars() {
            freq[(ch as u8 - b'a') as usize]+=1;
        }

        for (i,ch ) in s.chars().enumerate() {
            if freq[(ch as u8 - b'a') as usize]==1 {
                return i as i32;
            }
        }
        -1
    }
}