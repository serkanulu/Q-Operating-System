#include "charUtils.h"

#define IN_RANGE(val, low, high) ((val >= low) && (val <= high))

bool isspace(char ch) {
    return (ch == ' ') || (ch == '\t') || (ch == '\r') || (ch == '\n') || (ch == '\f') || (ch == '\0');
}

bool isnum(char ch) {
    return IN_RANGE(ch, '0', '9');
}

bool isalpha(char ch) {
    return islower(ch) || isupper(ch);
}

bool islower(char ch) {
    return IN_RANGE(ch, 'a', 'z');
}

bool isupper(char ch) {
    return IN_RANGE(ch, 'A', 'Z');
}

int ctoi(char c)
{
    if (isnum(c)) {
        return c - '0';
    } else {
        c = toLowerC(c);
        if (islower(c)) {
            return c - 'a';
        } else return -1;
    }
}

char itoc(int i) {
    if (IN_RANGE(i, 0, 9)) {
        return i + '0';
    } else if (IN_RANGE(i, 10, 35)) {
        return i + 'a'; // Use lowercase for hex digits
    }
    return '\0';
}

const char caseThersold = 'a' - 'A';

char toLowerC(char c) {
    if (isupper(c)) {
        c += caseThersold; // Difference between 'A'(65) and 'a'(97)
    }
    return c;
}

char toUpperC(char c) {
    if (islower(c)) {
        c -= caseThersold; // Difference between 'A'(65) and 'a'(97)
    }
    return c;
}
