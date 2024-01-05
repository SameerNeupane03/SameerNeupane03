#ifndef bankManagement
#define bankManagement





#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;
extern int records;

class bankingManagementSystem{
   private:
   int *clientAccNum;
   string *clientName;
   string *clientAddress;
   string *clientAccType;
   int *clientAge;
   int *clientAmount;

   public:

   bankingManagementSystem(int records);

   bankingManagementSystem();

   int newAccount();

   int depositAmount();

   int withdrawAmount();

   void balanceInquiry();

   void closeAccount();

   void accountHoldersList();

   int modifyAccount();

};




#endif