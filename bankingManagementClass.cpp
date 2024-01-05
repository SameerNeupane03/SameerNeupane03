#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include "depositeAmount.h"

using namespace std;

   bankingManagementSystem::bankingManagementSystem(int records){
    this -> clientAccNum   = new int[records];
    this -> clientName     = new string[records];
    this -> clientAddress  = new string[records];
    this -> clientAccType  = new string[records];
    this -> clientAge      = new int[records];
    this -> clientAmount   = new int[records];
   }

   bankingManagementSystem::bankingManagementSystem(){}

   int bankingManagementSystem::newAccount(){
        ofstream bankingFile("bankManagement.txt");
        bankingFile << "\n+---------------------+---------------------+---------------------+---------------------+---------------------+---------------------+" << endl;
        bankingFile <<"| " << setw(20) << left <<"Account Number" <<"| " << setw(20) << left << "Name" << "| " << setw(20) << left << "Address" << "| " << setw(20) << left << "Age" <<"| " << setw(20) << left << "Account Type" << "| " << setw(20) << left << "Balance" <<"| " << endl;
        for(int i = 0; i < records; i ++){
        cout<<" \n Enter the account number: "  << endl;
        cin>> clientAccNum[i];

        for(int j = 0; j < i; j ++){
        if(clientAccNum[j] == clientAccNum[i]){
        cout<<" Cannot have same account number " << endl;
        return 0; 
        }//else{
        }
        cout<<" Enter the name of the client: " << endl;
        cin.ignore();
        getline(cin, clientName[i]);

        cout<<" Enter an address of " << clientName[i] << " : " << endl; 
        getline(cin, clientAddress[i]);
 
        cout<<" You want to open (Current/Savings) account?: " << endl;
        getline(cin, clientAccType[i]);

        cout<<" Enter the age of "<< clientName[i] << " : " << endl;
        cin >> clientAge[i];

        cout<<" Enter an amount "<< clientName[i] <<" wants to deposit while opening the account: "<< endl;
        cin >> clientAmount[i];
    //  bankingFile << clientAmount[i];
    //    bankingFile << "\n+---------------------+---------------------+---------------------+---------------------+---------------------+---------------------+" << endl;
    //    bankingFile <<"| " << setw(20) << left <<"Account Number" <<"| " << setw(20) << left << "Name" << "| " << setw(20) << left << "Address" << "| " << setw(20) << left << "Age" <<"| " << setw(20) << left << "Account Type" << "| " << setw(20) << left << "Balance" <<"| " endl;
    //    for(int i = 0; i < records; i ++){
        bankingFile << "\n+---------------------+---------------------+---------------------+---------------------+---------------------+---------------------+" << endl;
        bankingFile <<"| " << setw(20) << left << clientAccNum[i] <<"| "<< setw(20) << left << clientName[i] <<"| " << setw(20) << left << clientAddress[i] <<"| " << setw(20) << left << clientAge[i] <<"| " << setw(20) << left << clientAccType[i] << "| "<< setw(20) << left << clientAmount[i] << "| " << endl;
        bankingFile << "\n+---------------------+---------------------+---------------------+---------------------+---------------------+---------------------+" << endl;
        }
        bankingFile.close();
  // }
    return 0;   // }
   }
   int bankingManagementSystem::depositAmount(){
    ofstream bankingFile("bankManagement.txt",ios::app);
    int depositAmt, accNum;
   // accNum = new int;
      cout<<" \n Enter your account number: " << endl;
      cin>> accNum;
      for(int i = 0; i < records; i ++){
        if(accNum == clientAccNum[i]){
            cout<<"\n Enter an amount you want to deposit: " << endl;
            cin>> depositAmt;
            clientAmount[i] = clientAmount[i] + depositAmt;
        }
      }
        bankingFile << "\n+---------------------+---------------------+---------------------+---------------------+---------------------+---------------------+" << endl;
        bankingFile <<"| " << setw(20) << left <<"Account Number" <<"| " << setw(20) << left << "Name" << "| " << setw(20) << left << "Address" << "| " << setw(20) << left << "Age" <<"| " << setw(20) << left << "Account Type" << "| " << setw(20) << left << "Balance" <<"| " << endl;
        for(int j = 0; j < records; j ++)  { 
        bankingFile << "\n+---------------------+---------------------+---------------------+---------------------+---------------------+---------------------+" << endl;
        bankingFile <<"| " << setw(20) << left << clientAccNum[j] <<"| "<< setw(20) << left << clientName[j] <<"| " << setw(20) << left << clientAddress[j] <<"| " << setw(20) << left << clientAge[j] <<"| " << setw(20) << left << clientAccType[j] << "| "<< setw(20) << left << clientAmount[j] << "| " << endl;
        bankingFile << "\n+---------------------+---------------------+---------------------+---------------------+---------------------+---------------------+" << endl;
 
           
         return 0;
        bankingFile.close();
      }
      cout<<" Account doesn't exist\n" << endl; 
      return 0;
   }

   int bankingManagementSystem::withdrawAmount(){
   ofstream bankingFile("bankManagement.txt", ios::app);
   int withdrawlAmt,accountNumber;
   cout<<" \n Enter your account: " << endl;
   cin>> accountNumber;
   for(int i = 0; i < records; i ++)
   if(accountNumber == clientAccNum[i]){{
    cout<<" Enter an amount you want to withdraw: " << endl;
    cin>> withdrawlAmt;
    clientAmount[i] -= withdrawlAmt;

   }
   }    
        cout<<"********************NEW BALANCE********************" << endl;
        bankingFile << "\n+---------------------+---------------------+---------------------+---------------------+---------------------+---------------------+" << endl;
        bankingFile <<"| " << setw(20) << left <<"Account Number" <<"| " << setw(20) << left << "Name" << "| " << setw(20) << left << "Address" << "| " << setw(20) << left << "Age" <<"| " << setw(20) << left << "Account Type" << "| " << setw(20) << left << "Balance" <<"| " << endl;
        for(int j = 0; j < records; j ++)  { 
        bankingFile << "\n+---------------------+---------------------+---------------------+---------------------+---------------------+---------------------+" << endl;
        bankingFile <<"| " << setw(20) << left << clientAccNum[j] <<"| "<< setw(20) << left << clientName[j] <<"| " << setw(20) << left << clientAddress[j] <<"| " << setw(20) << left << clientAge[j] <<"| " << setw(20) << left << clientAccType[j] << "| "<< setw(20) << left << clientAmount[j] << "| " << endl;
        bankingFile << "\n+---------------------+---------------------+---------------------+---------------------+---------------------+---------------------+" << endl;
      
       bankingFile.close();
      return 0;  
        }
        return 0;
   }


   void bankingManagementSystem::balanceInquiry(){
     int accNum;
     cout<<" \n Enter your account number to check the balance: " << endl;
     cin>> accNum;
     for(int j = 0; j < records; j ++ ){
      if(accNum == clientAccNum[j]){
        cout << "\n+---------------------+---------------------+---------------------+---------------------+---------------------+---------------------+" << endl;
        cout <<"| " << setw(20) << left <<"Account Number" <<"| " << setw(20) << left << "Name" << "| " << setw(20) << left << "Address" << "| " << setw(20) << left << "Age" <<"| " << setw(20) << left << "Account Type" << "| " << setw(20) << left << "Balance" <<"| " << endl;
        cout << "\n+---------------------+---------------------+---------------------+---------------------+---------------------+---------------------+" << endl;
        cout <<"| " << setw(20) << left << clientAccNum[j] <<"| "<< setw(20) << left << clientName[j] <<"| " << setw(20) << left << clientAddress[j] <<"| " << setw(20) << left << clientAge[j] <<"| " << setw(20) << left << clientAccType[j] << "| "<< setw(20) << left << clientAmount[j] << "| " << endl;
        cout << "\n+---------------------+---------------------+---------------------+---------------------+---------------------+---------------------+" << endl;  


     }
   }
   }
   void bankingManagementSystem::accountHoldersList(){
      char ch;
    ifstream myFile("bankManagement.txt");
    if(!myFile){
     cout<<" Error cannot open file ";
    }else{
        while(myFile){
        ch = myFile.get();
        cout<<ch;
    }
    }
    myFile.close();
   }

   void bankingManagementSystem::closeAccount(){
   int accountNumber;
   ofstream bankingFile("bankManagement.txt", ios:: app);
   cout<<" \n Enter your account number to close the account: " << endl;
   cin>> accountNumber;
   for(int i = 0; i < records; i ++){
    if(accountNumber == clientAccNum[i]){
     clientAccNum[i]  = 0;
     clientName[i]    = "NULL";
     clientAddress[i] = "NULL";
     clientAccType[i] = "NULL";
     clientAge[i]     = 0;
     clientAmount[i]  = 0;

        bankingFile << "\n+---------------------+---------------------+---------------------+---------------------+---------------------+---------------------+" << endl;
        bankingFile <<"| " << setw(20) << left <<"Account Number" <<"| " << setw(20) << left << "Name" << "| " << setw(20) << left << "Address" << "| " << setw(20) << left << "Age" <<"| " << setw(20) << left << "Account Type" << "| " << setw(20) << left << "Balance" <<"| " << endl;
        for(int j = 0; j < records; j ++)  { 
        bankingFile << "\n+---------------------+---------------------+---------------------+---------------------+---------------------+---------------------+" << endl;
        bankingFile <<"| " << setw(20) << left << clientAccNum[j] <<"| "<< setw(20) << left << clientName[j] <<"| " << setw(20) << left << clientAddress[j] <<"| " << setw(20) << left << clientAge[j] <<"| " << setw(20) << left << clientAccType[j] << "| "<< setw(20) << left << clientAmount[j] << "| " << endl;
        bankingFile << "\n+---------------------+---------------------+---------------------+---------------------+---------------------+---------------------+" << endl;
     
       bankingFile.close();
    }
   }
   }
   }

   int bankingManagementSystem::modifyAccount(){
    int accountNumber;
     ofstream bankingFile("bankManagement.txt");
     cout<<" \n Enter your account number to modify the details of your account: " << endl;
     cin>> accountNumber;
     for(int i = 0; i < records; i ++){
      if(accountNumber == clientAccNum[i]){
        bankingFile << "\n+---------------------+---------------------+---------------------+---------------------+---------------------+---------------------+" << endl;
        bankingFile <<"| " << setw(20) << left <<"Account Number" <<"| " << setw(20) << left << "Name" << "| " << setw(20) << left << "Address" << "| " << setw(20) << left << "Age" <<"| " << setw(20) << left << "Account Type" << "| " << setw(20) << left << "Balance" <<"| " << endl;
        for(int i = 0; i < records; i ++){
        cout<<" \n Enter the account number: "  << endl;
        cin>> clientAccNum[i];

        for(int j = 0; j < i; j ++){
        if(clientAccNum[j] == clientAccNum[i]){
        cout<<" Cannot have same account number " << endl;
        return 0; 
        }//else{
        }
        cout<<" Enter the name of the client: " << endl;
        cin.ignore();
        getline(cin, clientName[i]);

        cout<<" Enter an address of " << clientName[i] << " : " << endl; 
        getline(cin, clientAddress[i]);
 
        cout<<" You want to open (Current/Savings) account?: " << endl;
        getline(cin, clientAccType[i]);

        cout<<" Enter the age of "<< clientName[i] << " : " << endl;
        cin >> clientAge[i];

        cout<<" Enter an amount "<< clientName[i] <<" wants to deposit while opening the account: "<< endl;
        cin >> clientAmount[i];
    //  bankingFile << clientAmount[i];
    //    bankingFile << "\n+---------------------+---------------------+---------------------+---------------------+---------------------+---------------------+" << endl;
    //    bankingFile <<"| " << setw(20) << left <<"Account Number" <<"| " << setw(20) << left << "Name" << "| " << setw(20) << left << "Address" << "| " << setw(20) << left << "Age" <<"| " << setw(20) << left << "Account Type" << "| " << setw(20) << left << "Balance" <<"| " endl;
    //    for(int i = 0; i < records; i ++){
        bankingFile << "\n+---------------------+---------------------+---------------------+---------------------+---------------------+---------------------+" << endl;
        bankingFile <<"| " << setw(20) << left << clientAccNum[i] <<"| "<< setw(20) << left << clientName[i] <<"| " << setw(20) << left << clientAddress[i] <<"| " << setw(20) << left << clientAge[i] <<"| " << setw(20) << left << clientAccType[i] << "| "<< setw(20) << left << clientAmount[i] << "| " << endl;
        bankingFile << "\n+---------------------+---------------------+---------------------+---------------------+---------------------+---------------------+" << endl;
        return 0;
        }
        bankingFile.close();
      }
     }
     return 0;
   }