int math(int a, int b);

int pow(int num, int power) {
    bool negative = false;
    
    if (power == 0) {
        return 1;
    }

    if (power < 0) {
        power = -power;
        negative = power % 2 != 0; 
    }

    int res = 1;
    while(--power) {
        res *= num;
    }

    return res;
}
