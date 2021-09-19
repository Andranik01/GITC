#pragma once
#include "iostream"

struct Developer {
    int age;
    std::string lvl;
};

struct Position {
    std::string office;
    std::string languages[2];
    Developer programmer;

};