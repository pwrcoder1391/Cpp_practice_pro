#ifndef __ACC_UTIL__
#define __ACC_UTIL__

#include"Account.h"
#include <vector>
#include <iostream>

// function structure 

/* if we are writing this functions we need to change the */

void display(std::vector<Account*>&input);
void withdraw(std::vector<Account*>&input, double amt);
void deposit(std::vector<Account*>&input , double amt);

#endif
