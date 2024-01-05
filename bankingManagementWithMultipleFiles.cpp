#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include "depositeAmount.h"
int records;
using namespace std;

int main(){
    int userChoice;
    cout<<" How many client records you have to save?: "<< endl;
    cin>> records;
     bankingManagementSystem firstProject(records);
     while(1){
    cout<<"\n\n###############PRESS THE FOLLOWING KEYS###############"<< endl;
    cout<<"\n 1). New Account \n 2). Deposit Amount \n 3). Withdraw Amount \n 4). Balance Inquiry \n 5). Account Holders List \n 6). Close Account \n 7). Modify Account \n 8). Exit" << endl;
    cin>> userChoice;
    switch(userChoice){
     case 1:
      firstProject.newAccount();
      break;

      case 2:
       firstProject.depositAmount();
       break;

       case 3:
       firstProject.withdrawAmount();
       break;

       case 4:
       firstProject.balanceInquiry();
       break;

       case 5:
       firstProject.accountHoldersList();
       break;

       case 6: 
       firstProject.closeAccount();
       break;

       case 7:
       firstProject.modifyAccount();
       break;

       case 8:
       exit(0);
       break;

       default:
       cout<<" ********************PLEASE ENTER VALID NUMBER********************" << endl;
    }
     }
}
