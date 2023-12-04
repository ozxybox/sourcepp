#pragma once

#include <cstddef>
#include <fstream>
#include <string>

namespace studiomodelpp::internal {

class BufferStream;

void readStringAtOffset(BufferStream& stream, std::string& str, std::ios::seekdir offsetFrom = std::ios::cur, std::size_t subtractFromOffset = 0);

} // namespace studiomodelpp::internal
