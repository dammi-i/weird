// works with clang only compile with: clang++ -std=c++20
//
template <class T> concept O = true;
struct O<int> {};
