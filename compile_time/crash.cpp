// getting crashes and seg faults in runtime ?
// don't worry with this code you don't get any seg faults or shit
// u get them in compile time instesd just compile with:
// g++/clang++ -std=c++20 -fconstexpr-loop-limit=2147483646
// -fconstexpr-ops-limit=2147484647
//
consteval void rip() {
    for (;;) {
    }
}
int main() { rip(); }

