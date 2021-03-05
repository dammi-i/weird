#include <string_view>
// we care about our customers remember my words: "sleep is the key to strong thought" 


static_assert("23:00:00" >= std::string_view(__TIME__) && std::string_view(__TIME__) >= "06:00:00", "go to bed");
