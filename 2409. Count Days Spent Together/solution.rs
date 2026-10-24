impl Solution {
    pub fn count_days_together(
        arrive_alice: String,
        leave_alice: String,
        arrive_bob: String,
        leave_bob: String,
    ) -> i32 {
        let a_start = Self::convert(&arrive_alice);
        let a_end = Self::convert(&leave_alice);
        let b_start = Self::convert(&arrive_bob);
        let b_end = Self::convert(&leave_bob);

        let start = a_start.max(b_start);
        let end = a_end.min(b_end);

        if start > end {
            return 0;
        }

        end - start + 1
    }

    fn convert(date: &str) -> i32 {
        let days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];

        let month: usize = date[0..2].parse().unwrap();
        let day: i32 = date[3..5].parse().unwrap();

        let mut total = day;

        for i in 0..month - 1 {
            total += days[i];
        }

        total
    }
}