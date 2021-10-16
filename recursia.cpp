#include "iostream"

void rec(int start, int end) {
    if( (start >= 100) && (start <= end) && (start <= 999) ) {
        std::cout << start * start << " ";
        rec(start + 1, end);
    }
    else if(start < 100) {
        rec(start + 1, end);
    }
}