*******************************************************
* Name      :  Thanh Hung Tran
* Student ID:  109688640
* Class     :  CSC 2421
* HW#       :  Class Project phase 2
* Due Date  :  05/08/2022
*******************************************************
Read Me
*******************************************************
* Description of the program
*******************************************************
database.cpp contains the main function, as well as menu(). In main(), we have the vector that stores all of the 
gradeItem, mains() would also make a call to menu() to start the program. Menu() present the user with a list of options. 
R1() ask the user for the name of the file they want to read from and store the information in a vector. 
R2() add a new item to the list/vector
R3() prompt the user for what they want to search by. Then search all of these items that correlate with the user's input and display them
R6() prompt the user for the file name that they want to write to and then writes the information to that file. 
R8() generate the summary of gradeItem
R7() display all of the data onto the screen(terminal). R11() allow the user to exit the program.
*******************************************************
* Source files
*******************************************************
Name:  database.cpp
Main program. It contains menu() function as well as the vector that stores all gradeItem
Name:  gradeItem.h
Contains the declaration for the class gradeItem
Name:  gradeItem.cpp
Contains the definition for the class gradeItem.
Name:  R1.cpp
Contains the definition for the function R1.
Name:  R2.cpp
Contains the definition for the function R2.
Name:  R3.cpp
Contains the definition for the function R3.
Name:  R6.cpp
Contains the definition for the function R6.
Name:  R7.cpp
Contains the definition for the function R7.
Name:  R8.cpp
Contains the definition for the function R8.
*******************************************************
* Circumstances of programs
*******************************************************
The program runs successfully.
*******************************************************
* How to build and run the program
*******************************************************
1. Uncompress the zip file.
2. Build the program.
    Compile the program by:
    % make
3. Run the program by:
    % ./phase3
4. Delete the obj files, executables, and core dump by
    %./make clean