// Copyright 2022 UNN-IASR
#include "fun.h"
#include <cctype>

unsigned int faStr1(const char *str) {
    unsigned int count = 0;
    bool inWord = false;
    bool hasDigit = false;

    while (*str) {
        if (*str != ' ' && !inWord) {
            if (isdigit(*str))
                hasDigit = true;
            else
                count++;
            inWord = true;
        } else if (*str != ' ' && inWord && isdigit(*str) && !hasDigit) {
            count--;
            hasDigit = true;
        } else if (*str == ' ' && inWord) {
            inWord = false;
            hasDigit = false;
        }
        str++;
    }

    return count;
}

unsigned int faStr2(const char *str) {
    unsigned int count = 0;
    bool inWord = false;
    bool badWord = false;

    while (*str) {
        if (*str != ' ' && !inWord) {
            if (isupper(*str))
                count++;
            else
                badWord = true;
            inWord = true;
        } else if (*str != ' ' && inWord && !islower(*str) && !badWord) {
            count--;
            badWord = true;
        } else if (*str == ' ' && inWord) {
            inWord = false;
            badWord = false;
        }
        str++;
    }

    return count;
}

unsigned int faStr3(const char *str) {
    unsigned int countWords = 0;
    unsigned int countLetters = 0;
    unsigned int averageLength = 0;
    bool inWord = false;

    while (*str) {
        if (*str != ' ' && !inWord) {
            countWords++;
            countLetters++;
            inWord = true;
        } else if (*str != ' ' && inWord) {
            countLetters++;
        } else if (*str == ' ' && inWord) {
            inWord = false;
        }
        str++;
    }

    if (countWords != 0) {
        averageLength = countLetters / countWords;
        if (countLetters % countWords * 2 >= countWords)
            averageLength++;
    }

    return averageLength;
}
