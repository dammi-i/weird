#include <string_view>



static_assert("23:00:00" >= std::string_view(__TIME__) && std::string_view(__TIME__) >= "06:00:00", "go to bed");