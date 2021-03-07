#include <iostream>

// C++ pyramid program
void pyr(int **********a) { **********a = 10; }

int main() {
    int a = 5;
    int *y = &a;
    int **z = &y;
    int ***w = &z;
    int ****h = &w;
    int *****u = &h;
    int ******k = &u;
    int *******o = &k;
    int ********g = &o;
    int *********p = &g;
    pyr(&p);
    std::cout << *********p;
}
