impl Solution {
    pub fn check_if_pangram(s: String) -> bool {
        let mut freq=vec![0;26];

        for ch in s.chars() {
            freq[(ch as u8 - b'a') as usize]+=1;
        }

        for count in freq {
            if count == 0 {
                return false;
            }
        }
        true
    }
}