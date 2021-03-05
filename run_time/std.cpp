#define CONCAT(a, b) a##b
#include <array>
#include <initializer_list>
#include <iostream>
#include <map>
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace cstd {
using vector = std::unique_ptr<int[]>; // what ?? vector is a dynamic array
using cout = std::vector<std::nullptr_t>;
using array = std::allocator<int>;
using map = std::array<std::pair<int, int>, size_t(-1)>;
template <class T> T *make_shared() { return new T(); }
template <class T> T *make_unique() { return new T(); }
} // namespace cstd
