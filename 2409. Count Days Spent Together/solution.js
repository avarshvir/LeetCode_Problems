/**
 * @param {string} arriveAlice
 * @param {string} leaveAlice
 * @param {string} arriveBob
 * @param {string} leaveBob
 * @return {number}
 */
var countDaysTogether = function(arriveAlice, leaveAlice, arriveBob, leaveBob) {
    const aStart = convert(arriveAlice);
    const aEnd = convert(leaveAlice);
    const bStart = convert(arriveBob);
    const bEnd = convert(leaveBob);

    const start = Math.max(aStart, bStart);
    const end = Math.min(aEnd, bEnd);

    if (start > end) {
        return 0;
    }

    return end - start + 1;
};

function convert(date) {
    const days = [31, 28, 31, 30, 31, 30,
                  31, 31, 30, 31, 30, 31];

    const month = parseInt(date.substring(0, 2));
    const day = parseInt(date.substring(3, 5));

    let total = day;

    for (let i = 0; i < month - 1; i++) {
        total += days[i];
    }

    return total;
}