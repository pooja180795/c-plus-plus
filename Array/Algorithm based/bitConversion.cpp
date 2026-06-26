#include <iostream>
using namespace std;

class Convert{
public:
    int decToBin(int n)
    {
        int ans = 0;
        int power = 1;
        while(n > 0)
        {
            int rem = n % 2;
            n = n / 2;
            ans += rem * power;
            power *= 10;
        }
        return ans;
    }

    int binToDec(int bin)
    {
        int ans = 0;
        int power = 1; // 2^0
        while(bin > 0)
        {
            int rem = bin % 10;
            bin = bin / 10;
            ans += rem * power;
            power = power * 2;
        }
        return ans;
    }
};

int main()
{
    Convert c;
    int n = 50;
    int bin = c.decToBin(n);
    cout << "binary of " << n << " is = " << bin << endl;

    int dec = c.binToDec(bin);
    cout << "decimal of " << bin << " is = " << dec << endl;

    return 0;
}