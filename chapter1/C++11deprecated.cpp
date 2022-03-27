#include <bits/stdc++.h>
int main() {
    //warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
    char *str = "hello world"; 

    //error: ISO C++17 does not allow 'register' storage class specifier [-Wregister]
    /*
        register int i = 1;
    */

    //error: ISO C++17 does not allow incrementing expression of type bool [-Wincrement-bool]
    /*
        bool i = 0;
        ++i;
    */

    // std::cout << i << std::endl;
    return 0;
}