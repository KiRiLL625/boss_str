#include "Stringarr.h"

Stringarr::Stringarr(const std::vector<std::string>& strs) : strings(strs) {}

Stringarr::Stringarr(const Stringarr& other) : strings(other.strings) {}

Stringarr& Stringarr::operator=(const Stringarr& other) {
    if (this != &other) {
        strings = other.strings;
    }
    return *this;
}

void Stringarr::concatenate(const Stringarr& other) {
    for (size_t i = 0; i < strings.size() && i < other.strings.size(); ++i) {
        strings[i] += other.strings[i];
    }
}

void Stringarr::sort() {
    std::sort(strings.begin(), strings.end());
}

void Stringarr::merge(const Stringarr& other) {
    std::unordered_set<std::string> unique_strings(strings.begin(), strings.end());
    for (const auto& str : other.strings) {
        unique_strings.insert(str);
    }
    strings.assign(unique_strings.begin(), unique_strings.end());
}

void Stringarr::print() const {
    for (const auto& str : strings) {
        std::cout << str << std::endl;
    }
}

void Stringarr::print(size_t index) const {
    if (index < strings.size()) {
        std::cout << strings[index] << std::endl;
    }
}

Stringarr Stringarr::operator+(const Stringarr& other) const {
    Stringarr result(*this);
    result.strings.insert(result.strings.end(), other.strings.begin(), other.strings.end());
    return result;
}

Stringarr Stringarr::operator*(const Stringarr& other) const {
    Stringarr result(*this);
    result.concatenate(other);
    return result;
}

std::string& Stringarr::operator[](size_t index) {
    return strings[index];
}

const std::string& Stringarr::operator[](size_t index) const {
    return strings[index];
}