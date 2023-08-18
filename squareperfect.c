int is_square(int n) {
  
    if (n < 0) return 0;
    float square = sqrt(n);
    int squareint = (int)square;
    float epsilon = 1e-6;
    return fabs(square - squareint) < epsilon ? 1 : 0;
}
