#include <iostream>

using namespace std;

struct Equation
{
public:
    int x,y,k,b;
    
    Equation(int k, int b) {
        this->k = k;
        this->b = b;
    }

    bool belong(int x, int y) {
        return y == k * x + b;
    }
};

int main()
{
    Equation equa = Equation(-1,1);

    cout << equa.belong(2,3) << endl;

return 0;
}

/*
0 це якщо false

1 - true */
