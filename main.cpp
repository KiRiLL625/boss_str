#include "Stringarr.h"

void merge_and_sort(Stringarr& arr1, Stringarr& arr2) {
    Stringarr merged = arr1 + arr2;
    merged.sort();
    merged.print();
}

int main() {
    Stringarr arr1({"apple", "skibidi", "toilet"});
    Stringarr arr2({"code", "kfc", "boss", "nike"});

    merge_and_sort(arr1, arr2);

    return 0;
}