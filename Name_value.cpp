/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Daniel Guzman
 */

#include <iostream>
#include <string>
using namespace std;

class Name_value{
public:
    string name;
    int score;

    Name_value()
    {
        name = "";
        score = 0;
    }

    Name_value(string n, int s)
    {
        name = n;
        score = s;
    }
    
};