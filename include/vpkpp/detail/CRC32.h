#pragma once

#include <cstddef>
#include <cstdint>
#include <vector>

namespace vpkpp::detail {

std::uint32_t computeCRC32(const std::vector<std::byte>& buffer);

std::uint32_t computeCRC32(const std::byte* buffer, std::size_t len);

} // namespace vpkpp::detail
