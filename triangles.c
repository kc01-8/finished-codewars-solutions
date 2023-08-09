int triangleType(int a, int b, int c) {
    // Check if sides can form a triangle
    if (a + b > c && b + c > a && c + a > b) {
        // Check if it is a right-angled triangle
        if (fabs(a * a - (b * b + c * c)) < 0.000001 ||
            fabs(b * b - (a * a + c * c)) < 0.000001 ||
            fabs(c * c - (a * a + b * b)) < 0.000001) {
            return 2; // Right-angled Triangle
        } else if (a * a > b * b + c * c ||
                   b * b > a * a + c * c ||
                   c * c > a * a + b * b) {
            return 3; // Obtuse-angled Triangle
        } else {
            return 1; // Acute-angled Triangle
        }
    } else {
        return 0; // Not a Triangle
    }
}
