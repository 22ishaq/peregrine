#include "peregrine/version.hpp"

namespace peregrine {

std::string_view version() noexcept { return PEREGRINE_VERSION; }

}  // namespace peregrine