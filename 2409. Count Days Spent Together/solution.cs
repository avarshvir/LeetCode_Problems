public class Solution {
    public int CountDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int aStart = ConvertDate(arriveAlice);
        int aEnd = ConvertDate(leaveAlice);
        int bStart = ConvertDate(arriveBob);
        int bEnd = ConvertDate(leaveBob);

        int start = Math.Max(aStart, bStart);
        int end = Math.Min(aEnd, bEnd);

        if (start > end) {
            return 0;
        }

        return end - start + 1;
    }

    private int ConvertDate(string date) {
        int[] days = { 31, 28, 31, 30, 31, 30,
                       31, 31, 30, 31, 30, 31 };

        int month = int.Parse(date.Substring(0, 2));
        int day = int.Parse(date.Substring(3, 2));

        int total = day;

        for (int i = 0; i < month - 1; i++) {
            total += days[i];
        }

        return total;
    }
}