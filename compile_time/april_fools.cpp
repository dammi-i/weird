#include <string_view>

static_assert(!std::string_view(__DATE__).starts_with("Apr 1"),
    "April Fools! Your code doesn't compile! "
    "Well, let's be honest here, neither of us were expecting it to "
    "in the first place were we?");