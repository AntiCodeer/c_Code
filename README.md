# c_Code
In this repo i have some c programs's

You Can Compile and run all this code's by using GCC Compiler Or You can choose any IDE According To Your Choice.

    - Step 1 :- Just Type ->  gcc programName.c -o programName
    - Step 2 :- And Then -> ./programName

# Index
Thess are the Qn's and Description/Instruction to solve The problems (ha_ass -> Means Assignment No)
# ha_ass1.c :-
This is the first exercise of C programming tutorials. This C programming series contains many exercises that will help you to become a great problem solver. So, your first task is to “Print Multiplication Table in C”. All of the concept we have studied till now will use in this task, so by solving this exercise you can examine yourself that how much effort you need to put in learning C language.

Instructions:-
Take an input (in integer form) from the user and print its multiplication table on the screen. Following is the example of the output.

Input:
Enter the number you want multiplication table of: 6

Output:
Table of 6.

6*1 = 6

6*2 = 12

6*3 = 18

6*4 = 24

6*5 = 30

6*6 = 36

6*7 = 42

6*8 = 48

6*9 = 54

6*10 = 60

# ha_ass2.c :-

Question : Write a program which converts the following units into another :

In this program simply use switch case statements to ask user which type of conversion he wants to do and then simply use basic mathematics and convert one unit into another.

# ha_ass3.c :-
Question : Write a program using recursive function to produce Fibonacci series of numbers?

# ha_ass4.c :-
The task you have to perform is “Star Pattern In C”. Printing different pattern is one of the most popular programming exercise for beginners, it not only improves the programming skills but also the thinking ability of the person. Following are the instructions you have to follow:

Instructions:-
Take input from the user and ask the user to choose 0 for the triangular star pattern and 1 for the reserved triangular star pattern. When the user entered the number, your program should print the pattern accordingly.

Hint: Ask the user to enter the number of rows and then use nested for loop to print rows and columns of triangular star pattern.


# ha_ass5.c :-
The task you have to perform is “Array Reversal in C”.

Instruction:
In this task you have to write a C program that will reverse an array of integers. For that purpose, create the function that will take array as an argument and reverse an array.

Your program should print the array before and after reversal.

For Example:

Before Reversal: 1, 2, 3, 4, 5, 6, 67

After Reversal: 67, 6, 5, 4, 3, 2, 1

# ha_ass6.c :-
While using a browser, when you click right and select view page source, you will see the HTML of that website you are using at that time. HTML is the standard markup language for Web pages. So, today’s task is to write a code to “parse the sample HTML.”

Instructions:
You are given with an HTML code like, "<h1> This is a heading </h1>".Your task is to parse the content written between the HTML tags.

char string[] = - no<h1> This is a heading </h1>";

For this task, you have to create a void function parser, which will take a string as an argument and return the parsed content written in the HTML code. Following is the sample of input and output.

Input:
<h1> This is the heading </h1>

Output:
This is the heading

# ha_ass7.c :-
The purpose of the exercises given in this series is to help you become a pro in coding. The problem you are going to solve is very interesting. The task is to create a C Language program that works as a Travel Agency Manager.

Instructions:-
You manage a travel agency, and you want your n drivers to input their following details:

Name of the driver
Driving License Number
Route
Kms
Your program should be able to take n as input (or you can take n=3 for simplicity), and your drivers will start inputting their details one by one. Your program should print details of the drivers in a beautiful fashion. For this task, you have to use Structure only. These four inputs: name, driving license number, route, and km information will be struct members. After creating struct, you have to create its array of size “n.”

# ha_ass8.c :-
Problem Statement:-
Suppose ABC is a private limited company which manages the employee records of other companies. Employee id can be of any length, and it can contain any character. The following are the task you have to perform for three employees.

Take the length of an employee id as an input and store it in an integer length variable
Take an employee id as an input and display it on the screen.
Save the employee id in a character array, which is allocated dynamically.
Create only one character array dynamically.
Program Example:-
Employee1;

Enter the no. of characters in your employee id: 45

//dynamically allocate the character array

Take input from the user: //employee_id

Employee2;

Enter the no. of characters in your employee id: 5

//dynamically allocate the character array

Take input from the user: //employee_id

Employee3;

Enter the no. of characters in your employee id: 9

//dynamically allocate the character array

Take input from the user: //employee_id

You have to reallocate the memory in such a way so that your program is robust and uses less memory. By solving this exercise, you will not only practically perform the concept we have learned until now, but also it will improve you coding skills. Try to develop problem-solving skills in yourself. This will help in becoming a pro in programming. Best of luck!

# ha_ass9.c :-
Today’s task is going to be very interesting, as we are going to program a game “Rock, Paper & Scissor.”

For this task, we will use library time.h. The header file time.h contains definitions of functions to get and manipulate date and time information in our program. You also have to generate a random number for this program, so the following is the code to generate a random number.

int generateRandomNumber(int n)
{
srand(time(NULL));
return rand() % n;
}
The function srand() is used to initialize the random number generator by passing the argument seed. We can use srand() function is defined inside stdlib.h header file. The main will look like:

Problem statement:-
As we all are familiar with the concept of the game. In this game, we have two players. In our program, player 1 will be the user, and player 2 will be the computer. Player 1 selects either rock, paper, or scissor. The computer does not know about what player 1 has selected, so the computer randomly selects any item (rock, paper, or scissor).

In this game, each player has 3 turns. The player who gets the point at least two times will win the game. The following are the rules of the game.

rock vs. scissors -> rock wins

paper vs. scissors -> scissors wins

paper vs. rock -> paper wins

Task:-
You have to write a C program that will:

Allows the user to play this game three times with a computer.
Log the scores of the computer and the player.
Display the name of the winner at the end
Note: You have to display the name of the player during the game. Take users name as an input from the user.

# ha_ass10.c :-
The task you have to perform today is to write a program “Matrix Multiplication In C language”. Matrix multiplication in C language will calculate the product of two matrices (two-dimensional arrays).

Problem Statement:-
This program asks the user to enter the size of rows and columns of two matrices (a and b). Both of the matrices are 2D array. Your task is to populate these 2D arrays from the user, and then your program will display the results. Following is the condition to multiply the two matrices.

To multiply two matrices, the number of columns of the first matrix should be equal to the number of rows of the second matrix.

When this condition satisfies, your program should return the multiplied matrix result. However, if this condition does not satisfy, then your program should display a message to end-user that it cannot perform the multiplication of matrices.

# ha_ass11.c :-
The task you have to perform is to write a program that will check whether the integer number is a palindrome or not. A palindromic number is a number such as 16461, which remains the same when its digits are reversed. The example of palindromic numbers is 101, 131, 151.

Task:-
Create a function in which you will pass the number as an argument and the function return whether the number is palindrome or not.

int isPalindrome(int num)
{
return 1;
}
Take the integer input from the user using scanf() statement. If the number is a palindrome, the message should display on the screen that “This number is a palindrome”.

# ha_ass12.c :-
Problem Statement:-
Suppose you have a template letter.txt. You have to fill in values to a template. Letter.txt looks something like this:

Thanks {{name}} for purchasing {{item}} from our outlet {{outlet}}. Please visit our outlet {{outlet}} for any kind of problems. We plan to serve you again soon.

You have to write a program that will automatically fill the template.For this, read this file and replace these values:

{{name}} - Abhi

{{item}} - Laptop

{{outlet}} - xyz

Use file functions in c to accomplish the same.

# ha_ass13.c :-
Today’s exercise question is based on the command-line interface. If you have not that tutorial, then check the tutorial#68  to learn the concept of command-line arguments in C.

The task you have to perform today is to build an “Command Line Calculator in C”. Following is the problem statement.

Problem Statement:-
You have to create a command-line utility to add/subtract/divide/multiply two numbers. The first command-line argument of your c program must be the operation. The next arguments being the two numbers.


Here is an example:-

    ./programname 45 + 4

    49

# ha_ass14.c :-
The task you have to perform is to write a program that will calculate the “Area of the Circle Using Function Pointers in C.”

Problem Statement:-
You have to take four points(x1,y1,x2,y2) from the user using scanf(). To find the distance between these points, you will use the Euclidean distance formula.

Following is the task:

Write a function that will calculate the Euclidean distance.

    float Edistance(int x1, int y1, int x2, int y2)
    {
        return 0;
    }
This function will return an integer value.

Write a function that tells the area of the circle whose radius is equal to the distance between x1,y1,x2,y2, and pass function pointer as an argument.

    float areaOfCircle(int x1, int y1, int x2, int y2, <function pointer here> ){
    //return area of circle
    }

# [Binary Search Algo :-](https://github.com/AntiCodeer/c_Code_Learning/blob/main/src/binarySearch.c)

    Example :
    Input :-

    Enter the No of Elements :- 5

    a[1] = 12

    a[2] = 32

    a[3] = 54

    a[4] = 65

    a[5] = 78

    Ente the Key :- 65

    Output :-

    65 Element Found in 4 Position.

# [Linear Search Algo :- ](https://github.com/AntiCodeer/c_Code_Learning/blob/main/src/linearSearch.c)
    Example :
    Input :- 
    Enter the no of Elements :- 5

    Enter a[1] = 12

    Enter a[2] = 12

    Enter a[3] = 32

    Enter a[4] = 45

    Enter a[5] = 65

    Enter the Key :- 12

    Output :- 
    12 Element found in 1 Position.
    12 Element found in 2 Position.
    12 Element founded 2 times.

# [stringnochecker.c](https://github.com/AntiCodeer/c_Code_Learning/blob/main/src/stringnochecker.c)
# [primeDigits.c](https://github.com/AntiCodeer/c_Code_Learning/blob/main/src/primeDigits.c)
# [primeSumDigits.c](https://github.com/AntiCodeer/c_Code_Learning/blob/main/src/primeSumDigits.c)