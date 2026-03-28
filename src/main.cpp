// Copyright 2022 UNN-IASR
#include <iostream>
#include "fun.h"

int main() {
    const char* str1 = "Hello World 123  ab2c de23h 56ij78k 0  x 1ab ab12";
    const char* str2 = "Hello world aBc abC ABcd abCd R ";
    const char* str3 = "";
    const char* str4 = "   ";
    std::cout << str1 << " | count = " << faStr1(str1) << "\n";
    std::cout << str1 << " | average length = " << faStr3(str1) << "\n";
    std::cout << str2 << " | count = " << faStr2(str2) << "\n";
    std::cout << str2 << " | average length = " << faStr3(str2) << "\n";
    std::cout << str3 << " | count = " << faStr1(str3) << "\n";
    std::cout << str3 << " | average length = " << faStr3(str3) << "\n";
    std::cout << str4 << " | count = " << faStr2(str4) << "\n";
    std::cout << str4 << " | average length = " << faStr3(str4) << "\n";
    return 0;
}
