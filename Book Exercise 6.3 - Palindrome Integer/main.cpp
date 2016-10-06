//
//  main.cpp
//  Book Exercise 6.3 - Palindrome Integer
//
//  Created by ax on 10/5/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include<iostream>
#include<string>

using namespace std;

int return_revese(int& number_input) {
    
    int switcherooed = 0;
    int working_digits = number_input;
    
    while (working_digits > 0)
    {
        int slice_off_last_digit = working_digits % 10;
        switcherooed = switcherooed * 10 + slice_off_last_digit;
        working_digits = working_digits / 10;
    }
    
    return switcherooed;
}

bool is_palindrome(int number) {
    
    bool palindrome_match = 0;
    
    if (return_revese(number) == number)
        palindrome_match = 1;
    
    return palindrome_match;
}

int main() {
    
    int num_input = 0;
    
    cout << "Enter some numbers: ";
    
    cin >> num_input;
    
    cout << endl;
    
    cout << "1 is palindrome, 0 is not: " << is_palindrome(num_input) << endl;
    
    return 0;
    
}