#ifndef STRINGBOSS_STRINGARR_H
#define STRINGBOSS_STRINGARR_H

#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <unordered_set>

class Stringarr {
private:
    std::vector<std::string> strings;
public:
    Stringarr() = default;
    Stringarr(const std::vector<std::string>& strs);
    Stringarr(const Stringarr& other);
    Stringarr& operator=(const Stringarr& other);
    ~Stringarr() = default;

    void concatenate(const Stringarr& other);
    void sort();
    void merge(const Stringarr& other);
    void print() const;
    void print(size_t index) const;

    Stringarr operator+(const Stringarr& other) const;
    Stringarr operator*(const Stringarr& other) const;
    std::string& operator[](size_t index);
    const std::string& operator[](size_t index) const;
};

#endif //STRINGBOSS_STRINGARR_H