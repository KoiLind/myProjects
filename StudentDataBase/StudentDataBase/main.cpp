//  StudentDataBase.cpp
//  Purpose: Helps instituions manage data, communications, and scheduling.
//  Info: Used while, if, for, else if, char.
//  Created by Owner on 3/13/23.

//Relevant Libraries
#include <iostream> //  Header file that contains functions for input/output operations Ex; cin, cout, cerr, clog.
#include <fstream>  //  Combination of ofstream and ifstream & provides the capability of creating, writing and reading a file.
#include <string.h> //  Defines several functions to manipulate C strings & arrays.
#include <stdio.h>  //  Performs input & output operations Ex; printf() and scanf() are used to display output and take input from a user.
 

// Multiple libraries the namespace helps in avoiding the ambiguity that may occur when two identifiers have the same name.

using namespace std;

int main()
{
    //MAX LENGTH OF DATA TO BE ENTERED 15
    
    char data[15];
    int x = 0, choice = 0, num = 0;
    
    //INITIAL MARK ASSIGNED TO SUBJECTS
    
    string empty = "00";
    string proctorID = "";
    
    //CREATES AN INPUT STREAMED OBJECT NAMED x WHICH IS USED TO READ DATA FROM A FILE NAMED DATA.TXT.
    
    ifstream f("Data.txt");
    string line;    //DECLARES STRING VARIABLE WHICH CAN HOLD SEQUENCE OF CHAR CHARACTERS
    
    //FOR LOOP THAT COUNTS THE TOTAL NUMBER OF LINES
    
    for (int i = 0; std::getline(f, line); ++i) {
            num++;
        }
    
    //PRINTS OUT CHOICES FOR USER
    
    while (choice != 6) {
        cout << "\nAvailable operations: ";
        cout << "\n1. Add New Students";
        cout << "\n2. Student Login";
        cout << "\n3. Faculty Login";
        cout << "\n4. Proctor Login";
        cout << "\n5. Admin View";
        cout << "\n6. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;
        
        if(choice == 1){
            cout << "Enter the number of students: ";
            cin >> x;
            
            num = num + x;
            
            for(int i = 0; i < x; i++){
                ofstream outfile;
                outfile.open("Data.txt", ios::app);
                
                //INPUTS STUDENT DATA LINE BY LINE 
                
                cout << "Enter your registration number: ";
                cin >> data;
                int len = strlen(data);
                
                while (len < 15) {
                    data[len] = ' ';
                    len += 1;
                }
                outfile << data << "\t";          //WRITES THE VALUE OF THE VARIABLE 'DATA' TO OUTPUT STREAM 'OUTFILE'FOLLOWED BY A TAB '\t' FOR SPACE BETWEEN NUMBERS
                outfile << empty << "\t";           // INSERTS EMPTY DATA INTO THE FILE
                outfile << empty << "\t";
                
                cout << "Enter your proctor ID: ";
                cin >> proctorID;
                outfile << proctorID << endl;       //WRITES VALUE OF PROCTORID TO OUTPUT FILE
            }
        }
        
        else if (choice == 2){
            char regnum[9];
            cout << "Enter your registration number: ";
            cin >> regnum;
            
            ifstream infile;
            int findnum = 0;
            infile.open("Data.txt", ios::in);
            
            
            while(infile >> data){
                if (strcmp(data, regnum) == 0){
                    cout << "\nRegistration Number: " << data << endl;
                    infile >> data;
                    cout << "Name: " << data << endl;
                    
                    infile >> data;
                    cout << "CSE1001 mark: " << data << endl;
                    
                    infile >> data;
                    cout << "CSE1002 mark: " << data << endl;
                    
                    infile >> data;
                    cout << "Proctor ID: " << data << endl;
                    
                    infile.close();
                    findnum = 1;
                }
        }
            if (findnum == 0){
                cout << "No registration number found!" << endl;
            }
    }
        else if (choice == 3){
            char SubjectCode[7];
            cout << "Enter your subject code: ";
            cin >> SubjectCode;
            
            string info1 = "CSE1001 mark";
            string info2 = "CSE1002 mark";
                        
                        ifstream infile;
                        int findSubject = 0;
                        infile.open("Data.txt", ios::in);
                        
                        while (infile >> data) {
                            if (strcmp(data, SubjectCode) == 0) {
                                cout << "\nSubject Code: " << data << endl;
                                infile >> data;
                                cout << "Registration Number: " << data << endl;
                                
                                infile >> data;
                                cout << "Name: " << data << endl;
                                
                                infile >> data;
                                cout << info1 << ": " << data << endl;
                                
                                infile >> data;
                                cout << info2 << ": " << data << endl;
                                
                                infile.close();
                                findSubject = 1;
                            }
                        }
                        
                        if (findSubject == 0) {
                            cout << "No record found for the subject code!" << endl;
                        }
                    }
                    
                    else if (choice == 4) {
                        char proctorID[6];
                        cout << "Enter your proctor ID: ";
                        cin >> proctorID;
                        
                        ifstream infile;
                        int findProctor = 0;
                        infile.open("Data.txt", ios::in);
                        
                        while (infile >> data) {
                            infile >> data;
                            infile >> data;
                            
                            if (strcmp(data, proctorID) == 0) {
                                cout << "\nProctor ID: " << data << endl;
                                infile >> data;
                                cout << "Registration Number: " << data << endl;
                                
                                infile >> data;
                                cout << "Name: " << data << endl;
                                
                                infile >> data;
                                cout << "CSE1001 mark: " << data << endl;
                                
                                infile >> data;
                                cout << "CSE1002 mark: " << data << endl;
                                
                                infile.close();
                                findProctor = 1;
                            }
                        }
                        
                        if (findProctor == 0) {
                            cout << "No records found for the proctor ID!" << endl;
                        }
                    }
                    
                    else if (choice == 5) {
                        ifstream infile;
                        infile.open("Data.txt", ios::in);
                        
                        cout << "\nRegistration Number\tName\tCSE1001 mark\tCSE1002 mark\tProctor ID" << endl;
                        
                        while (infile >> data) {
                            cout << data << "\t\t";
                            infile >> data;
                            cout << data << "\t";
                            infile >> data;
                            cout << data << "\t";
                            infile >> data;
                            cout << data << "\t";
                            infile >> data;
                            cout << data << endl;
                        }
                        
                        infile.close();
                    }
                    
                    else if (choice == 6) {
                        cout << "Exiting the program. Goodbye!" << endl;
                    }
                    
                    else {
                        cout << "Invalid choice. Please enter a valid option." << endl;
                    }
                }
                
                return 0;
            }
    







