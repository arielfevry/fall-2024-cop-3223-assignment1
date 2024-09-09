/*********************************
fracturing.c 
Author: Ariel Fevry
Date: 9/8/2024
Class: COP3223, Juan Parra
Purpose: The program accepts 4 user inputs as (x,y) points on a circle and does
         five computations on the inputs: circumference, area, distance, height, width.
         The purpose of the program is to practice creating functions as a way to 
         reduce redudancy and break a problem down into its parts. 
Inputs: 2 (x,y) coordinates
Ouput: The distance between the coordiantes, area of the circle, perimeter of the circle, 
       width of the circle, and height of the circle. The user inputed coordinates will also
       be displayed back in setence form to the terminal. 
Limitations: No input validation to prevent program from crashing. 
*********************************/

// import header files standard i/o and math library functions
#include <stdio.h>
#include <math.h>

#define PI 3.14159 // define PI as a constant value

double askUserForInput(){
    // variable to hold the user input
    double userInputedDimension = 0;

    // save the inputed value to variable
    scanf("%lf", &userInputedDimension);

    // return dimension
    return userInputedDimension;
}

// helper function to print user inputs back to terminal and for DRY
void printUserPoints(double x1, double y1, double x2, double y2){

    // prints the user inputs in sentence form
    printf("Point #1 entered: x1 = %lf; y1 = %lf; \nPoint #2 entered: x2 = %lf; y2 = %lf;", x1, y1, x2, y2);
}

// helper function to calculate the distance between two points without any print statments (its janky i know im sorry)
double distanceFormula(){
    // initialize and declare the user inputed points using askuser function
    double x1 = askUserForInput();
    double y1 = askUserForInput();
    double x2 = askUserForInput();
    double y2 = askUserForInput();

    // intitialize distance variable and calculate using the distance formula
    double distance = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

    // display user inputs
    printUserPoints(x1, y1, x2, y2);

    return distance;
}

double calculateDistance(){

    // calculate distance between points using formula function
    double distance = distanceFormula();
    
    // display distance between the points to terminal   
    printf("\nThe distance between the two points is %lf \n", distance);
    
    return distance;
}

double calculatePerimeter(){

    // declaring / initializing radius from the diameter (distance)
    double radiusOfCircle = distanceFormula()/2;

    printf("\nThe perimeter of the city encompassed by your request is %lf\n", (2*PI*radiusOfCircle)); // calculate perimeter 2piR and print

    return 1;
}

double calculateArea(){

    // calculate area of circle PI * radius squared using math library and distance func for diameter
    double area = PI * pow(distanceFormula()/2, 2);

    // output to terminal 
    printf("\nThe area of the city encompassed by your request is %lf\n", area);

    return 1;
}

double calculateWidth(){
    // distance formula to calculate width of circle (diameter)
    double width = distanceFormula();

    printf("\nThe width of the city encompassed by your request is %lf\n", width);

    return 1;
}

double calculateHeight(){
    // distance formula to calculate height of circle (diameter)
    double height = distanceFormula();

    printf("\nThe height of the city encompassed by your request is %lf\n", height);

    return 1;
}

int main(int argc, char **argv){
    //prompt user and call functions
    printf("Calculate the distance between two points on a circle by entering the x and y of the points respectively\n");
    calculateDistance();

    printf("\nCalculate perimeter of the city by entering the x and y of two points respectively.\n");
    calculatePerimeter();
    
    printf("\nCalculate the area of a city by entering the x and y of two points respectively.\n");
    calculateArea();

    printf("\nCaculate the width of a city by entering the x and y of two points respectively\n");
    calculateWidth();

    printf("\nCalculate the height of a city by entering the x and y of two points respectively\n");
    calculateHeight();
    
    return 0;
}