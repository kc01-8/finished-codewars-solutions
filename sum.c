int solution(int number) {
		int sum = 0;
    for (int i = 1; i < number; i++){
        if(i % 3 == 0 && i % 5 == 0){
            sum += i;
        } else if(i % 3 == 0){
            sum += i;
        } else if(i % 5 == 0){
            sum += i;
        } else{
            sum += 0;
        }
    }
    return sum;
}
