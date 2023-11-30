#include"Account_Util.h"
#include"Account.h"
#include"Savings_Account.h"
#include"Trust_Account.h"
#include"Checking_Account.h"
#include<iostream>
#include<vector>

/*
idea is to write the individual code in Account --> Savings --> Checking --> Trust --> Utils (contains - display , withdraw and deposit functions)

Challenge is to not make multiples of the utils functions + use I_Printable & virtual functions here 

*/


int main()
{   
    Savings s1{3000 ,"Pronnoy", 3.3};
    s1.display();

    Account *p1 = new Savings{3000 ,"kkk", 3.3};
    std::vector<Account*>p = {p1};
    display(p);
    withdraw(p , 1000);
    display(p);

    return 0 ;
}
