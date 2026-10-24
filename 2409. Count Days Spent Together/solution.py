class Solution(object):
    def countDaysTogether(self, arriveAlice, leaveAlice, arriveBob, leaveBob):
        aStart = self.convert(arriveAlice)
        aEnd = self.convert(leaveAlice)
        bStart = self.convert(arriveBob)
        bEnd = self.convert(leaveBob)

        start = max(aStart, bStart)
        end = min(aEnd, bEnd)

        if start > end:
            return 0
        
        return end - start + 1
    
    def convert(self, date):
        days = [31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31]

        month = int(date[0:2])
        day = int(date[3:5])

        total = day

        for i in range(month - 1):
            total = total + days[i]
        
        return total
        