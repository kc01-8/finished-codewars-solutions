int nbYear(int p0, double percent, int aug, int p) {
    int n = 0;

    while (p0 < p) {
        int yearpercent = p0 * (percent / 100);
        p0 = p0 + yearpercent + aug;
        n++;
    }

    return n;
}
