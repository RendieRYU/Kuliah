#ifndef XCEPT_H
#define XCEPT_H

#include <stdexcept>

inline std::runtime_error BadInitializers() {
    return std::runtime_error("Invalid size for array initialization");
}

inline std::out_of_range OutOfBounds() {
    return std::out_of_range("Array index out of bounds");
}

inline std::length_error SizeMismatch() {
    return std::length_error("Size mismatch between arrays");
}

#endif // XCEPT_H
