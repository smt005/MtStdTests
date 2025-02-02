#pragma once

#include <iostream>
#include <string>
#include <random>

using namespace std;

inline string STOP()
{
    string text;
    std::cin >> text;
    return text;
}

template <typename T>
int GetRandom(T lowerBound, T upperBound)
{
    if (lowerBound > upperBound) {
        std::swap(lowerBound, upperBound);
    }

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(lowerBound, upperBound);

    return distrib(gen);
}
