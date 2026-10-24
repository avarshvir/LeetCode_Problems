func countDaysTogether(arriveAlice string, leaveAlice string, arriveBob string, leaveBob string) int {
    aStart := convert(arriveAlice)
    aEnd := convert(leaveAlice)
    bStart := convert(arriveBob)
    bEnd := convert(leaveBob)

    start := max(aStart, bStart)
    end := min(aEnd, bEnd)

    if start > end {
        return 0
    }

    return end - start + 1
}

func convert(date string) int {
    days := []int{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}

    month, _ := strconv.Atoi(date[0:2])
    day, _ := strconv.Atoi(date[3:5])

    total := day

    for i := 0; i < month-1; i++ {
        total += days[i]
    }

    return total
}