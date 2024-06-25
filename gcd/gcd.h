#ifndef GCD_H
#define GCD_H



class gcd
{
private:
public:
    gcd(){
    }
    int get_gcd(int a, int b) {
        return (a == 0) ? b: get_gcd(b % a, a);
    }
};

#endif // GCD_H
