char get_grade(int a, int b, int c) {
int tnd = (a + b + c) / 3;
    if (tnd < 60) {
        return 'F';
    } else if (tnd < 70) {
        return 'D';
    } else if (tnd < 80) {
        return 'C';
    } else if (tnd < 90) {
        return 'B';
    } else {
        return 'A';
    }
}
