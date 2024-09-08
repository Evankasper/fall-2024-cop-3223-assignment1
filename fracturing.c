//********************************************************
// fracture.c
// Author: Evan Kasper
// Class: COP 3223, Professor Parra
// Purpose: functions
// Input: 
//
// Output:
// //********************************************************


// Header file for input output functions
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>

//define
#define PI 3.14159

//functions
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double doActualWork();
 
// main function - where we will print the message
int main()
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();



    return 0;
}

//get input, print first two lines required by each function, return distance between points
double doActualWork()
{
    //get input
    int x1, y1, x2, y2;
    scanf("%d", &x1);
    scanf("%d", &y1);
    scanf("%d", &x2);
    scanf("%d", &y2);

    //print stuff
    printf("Point #1 entered: x1 = %d; y1 = %d\n", x1, y1);
    printf("Point #2 entered: x2 = %d; y2 = %d\n", x2, y2);

    //calculate distance between points
    double distance;
    distance = abs(sqrt(pow(x2-x1, 2)+pow(y2-y1, 2)))

    return distance;

}

double calculateDistance()
{
    double distance = doActualWork();
    printf("The distance between the two points is %f\n", distance);

    return distance;
}

double calculatePerimeter()
{
    double distance = doActualWork();
    printf("The perimeter of the city encompased by your request is %f\n", distance * PI);

    return 2.0;
}

double calculateArea()
{
    double distance = doActualWork();
    printf("The area of the city encompased by your request is %f\n", pow(distance/2, 2) * PI);

    return 2.0;
}

double calculateWidth()
{
    double distance = doActualWork();
    printf("The width of the city encompassed by your request is %f\n" , distance);
    
    return 1.0;
}

double calculateHeight()
{
    double distance = doActualWork();
    printf("The height of the city encompassed by your request is %f\n" , distance);

    return 1.0;
}