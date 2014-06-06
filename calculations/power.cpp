int PowerInvalidInputFlag;

double do_power(double base, unsigned int absExponent) {
    if(absExponent == 0) {
        return 1.0;
    }
    else if(absExponent == 1) {
        return base;
    }
    double result = do_power(base, absExponent >> 1);
    result *= result;
    if(absExponent % 2 == 1) {
        result *= base;
    }
    return result;
}


bool equal(double a, double b) {
    if( (a - b > -0.0000001)
        && (a - b < 0.0000001) ) {
        return true;
    }
    else {
        return false;
    }
}

double power(double base, int exponent) {
    PowerInvalidInputFlag = 0;
    if(equal(base, 0.0) && exponent <= 0) {
        PowerInvalidInputFlag = -1;
        return 0.0;
    }
    unsigned int absExponent = (unsigned int)exponent;
    if(exponent < 0) {
        absExponent = (unsigned int)(-exponent);
    }
    double result = do_power(base, absExponent);
    if(exponent < 0) {
        result = 1.0 / result;
    }
    return result;
}
