int past(int hours, int minutes, int seconds) {
    int totalMilliseconds = 0;
    totalMilliseconds += hours * 3600000;
    totalMilliseconds += minutes * 60000;
    totalMilliseconds += seconds * 1000;

    return totalMilliseconds;
}

