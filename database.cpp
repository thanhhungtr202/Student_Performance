/********************************************
 * database.cpp contain menu() function which allow users to navigate around the program. It 
 * also have a vector to store all of gradeItem in main().
 * 
 * Author: Thanh Hung Tran
 * Version: 05/08/2022
 *********************************************/
#include "gradeItem.h"
#include "R1.cpp"
#include "R6.cpp"
#include "R7.cpp"
#include "R2.cpp"
#include "R3.cpp"
#include "R8.cpp"

void menu(vector<GradeItem>& container)
{
    bool exit = false;
    //loop the program until the user enter R11 to quit
    do
    {
        string choice = "";
        string innerChoice = "";
        int counter = 0;
        bool verify = false;
        cout << "Please select one of the following options(Case Sensitive):" << endl;
        //verifying the user input
        while(!verify)
        {
            if(counter == 1)
            {
                cout << "Invalid! Please choose again(Case Sensitive):" << endl;
            }
            cout << "R1-Read the csv formatted database file." << endl;
            cout << "R2-Add a new grade item" << endl;
            cout << "R3-Search for grade items" << endl;
            cout << "R6-Save the grade items into a csv formatted file." << endl;
            cout << "R7-Display list of grade items on screen." << endl;
            cout << "R8-Generate summary of grade item." << endl;
            cout << "R11-Exit" << endl;
            cin >> choice;
            if(choice == "R1" || choice == "R6" || choice == "R7" || choice == "R11" || choice =="R2" || choice == "R3" || choice == "R8")
            {
                verify = true;
            }
            counter = 1;
        }

        //check to see what did the user choose and call the appropirate function
        if(choice == "R1")
        {
            int error = R1(container);
            if(error == 1)
            {
                cout << "File does not exist" << endl;
            }
            else if(error == 2)
            {
                cout << "File is empty" << endl;
            }
        }
        else if(choice == "R6")
        {
            R6(container);
        }
        else if(choice == "R7")
        {
            R7(container, 1);
        }
        else if(choice == "R11")
        {
            exit = true;
        }
        else if(choice == "R2")
        {
            R2(container);
        }
        else if(choice == "R3")
        {
            bool innerExit = false;
            //Loop until user enter valid option
            do
            {
                cout << "Please select what you want to search by:" << endl;
                cout << "R3.1-Search by date" << endl;
                cout << "R3.2-Search by description" << endl;
                cin >> innerChoice;
                //Search by date
                if(innerChoice == "R3.1")
                {
                    vector<GradeItem> tempPtr = R3Date(container);
                    //Display search result
                    R7(tempPtr, 0);
                    innerExit = false;
                }
                //search by description
                else if(innerChoice == "R3.2")
                {
                    vector<GradeItem> tempPtr = R3Description(container);
                    //Display search result
                    R7(tempPtr, 0);
                    innerExit = false;
                }
                else
                {
                    cout << "Invalid option, please choose again" << endl;
                    innerExit = true;
                }
            }
            while(innerExit);
        }
        else if(choice == "R8")
        {
            if(container.empty())
            {
                cout << "There is nothing to display the summary for, please use R1 first" << endl;
            }
            else
            {
                R7(container, 1); ;//Display all of the items first
                R8(container);;//Calculate and display summary
            }
        }
    } while(!exit);

}

int main()
{
    //data structure(vector) to store all of the Gradeitem objects
    vector<GradeItem> container;
    menu(container);
    return 0;
}