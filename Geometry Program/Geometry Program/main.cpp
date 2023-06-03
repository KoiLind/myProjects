//Purpose: Calculates the area of all 2D and 3D geometrical shapes
//  GeometryProgram.cpp
//  Geometry Program
// Created on 2/17/23.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const float PI = 3.14159;
    int user_input;
    float length, width, base, height, lengtha, lengthb, axisa, axisb;
    int radius;
    float area;
    
    
    while (user_input < 14 && user_input > 0) {
        
        
        cout << "\n\nGeometry Calculator: " << endl
        << "   1. Calculate the area of a Circle" << endl
        << "   2. Calculate the area of a Rectangle" << endl
        << "   3. Calculate the area of a Square" << endl
        << "   4. Calculate the area of a Triangle" << endl
        << "   5. Calculate the area of a Parallelogram" << endl
        << "   6. Calcualte the area of a Trapezium" << endl
        << "   7. Calculate the area of a Ellipse" << endl
        << "   8. Calculate the area of a Cube" << endl
        << "   9. Calculate the area of a Rectangular Prism" << endl
        << "  10. Calculate the area of a Cylinder" << endl
        << "  11. Calculate the area of a Cone" << endl
        << "  12. Calculate the area of a Sphere" << endl
        << "  13. Calcualte the area of a Hemisphere" << endl
        << "  14. Quit" << endl
        << "  Enter your choice (1-14): ";
        cin >> user_input;
        cout << endl;
        
        
        switch (user_input)
        {
            case 1:
                cout << "What is the radius: ";
                cin >> radius;
                
                if (radius < 0)
                {
                    cout << "Please enter a positive number." << endl;
                }
                
                else
                {
                    area = PI * pow(radius, 2);
                    cout << setprecision(2);
                    cout << "The area of the circle is " << area << "." << endl;
                }
                
                break;
                
                
            case 2:
                cout << "What is the width?";
                cin >> width;
                
                if(width <= 0)
                {
                    cout << "Please enter a positive number." << endl;
                }
                
                cout << "What is the length? ";
                cin >> length;
                
                if(length <= 0)
                {
                    cout << "Please enter a positive number." << endl;
                }
                
                else
                {
                    area = length * width;
                    cout << setprecision(2);
                    cout << "The area of the rectangle is " << area << "." << endl;
                }
                
                break;
                
                
            case 3:
                cout << "What is the length? ";
                cin >> length;
                
                if(length <= 0)
                {
                    cout << "Please enter a positive number." << endl;
                }
                
                else
                {
                    area = pow(length, 2);
                    cout << setprecision(2);
                    cout << "The area of the square is " << area << "." << endl;
                }
                
                break;
                
                
            case 4:
                cout << "What is the base? ";
                cin >> base;
                
                if(base <= 0)
                {
                    cout << "Please enter a positive number." << endl;
                }
                
                cout << "What is the height? ";
                cin >> height;
                
                if(height <= 0)
                {
                    cout << "Please enter a positive number." << endl;
                }
                
                else
                {
                    area = base * height * 1/2;
                    cout << setprecision(2);
                    cout << "The area of the triangle is " << area << "."<< endl;
                }
                
                break;
                
                
            case 5:
                cout << "What is the base? ";
                cin >> base;
                
                if(base <= 0)
                {
                    cout << "Please enter a positve number." << endl;
                }
                
                cout << "What is the vertical height? " << endl;
                cin >> height;
                
                if (height <= 0)
                {
                    cout <<  "Please enter a positive number." << endl;
                }
                
                else
                {
                    area = base * height;
                    cout << setprecision(2);
                    cout << "The area of the parallelogram is " << area << "." << endl;
                }
                
                break;
                
                
            case 6:
                cout << "What is the height? ";
                cin >> height;
                
                if (height <= 0)
                {
                    cout << "Please enter a positive number." << endl;
                }
                
                cout << "What is the length of side a? ";
                cin >> lengtha;
                
                if(lengtha <= 0)
                {
                    cout << "Please enter a positive number." << endl;
                }
                
                cout << "What is the length of side b? ";
                cin >> lengthb;
                
                if(lengthb <= 0)
                {
                    cout << "Please enter a positive number." << endl;
                }
                
                else
                {
                    area =    1/2 * (lengtha + lengthb) * height;
                    cout << setprecision(2);
                    cout << "The area of the trapezium is " << area << "." << endl;
                }
                
                break;
                
                
            case 7:
                cout << "What is axis a? ";
                cin >> axisa;
                
                if(axisa <= 0)
                {
                    cout << "Please enter a positive number.";
                }
                
                cout << "What is axis b? ";
                cin >> axisb;
                
                if(axisb <= 0)
                {
                    cout << "Please enter a positive number.";
                }
                
                else
                {
                    area = PI * axisa * axisb;
                    cout << setprecision(2);
                    cout << "The area of the ellipse is " << area << "." << endl;
                }
                
                break;
                
                
            case 8:
                cout << "What is the length of the edge? ";
                cin >> length;
                
                if(length <= 0)
                {
                    cout << "Please enter a positive number.";
                }
                
                else
                {
                    area = 6 * pow(length, 2);
                    cout << setprecision(2);
                    cout << "The area of the cube is " << area << "." << endl;
                }
                
                break;
                
                
            case 9:
                cout << "What is the length? ";
                cin >> length;
                
                if(length <= 0)
                {
                    cout << "Please enter a positive number.";
                }
                
                cout << "What is the height? ";
                cin >> height;
                
                if(height <= 0)
                {
                    cout << "Please enter a positive number.";
                }
                
                cout <<"What is the width? ";
                cin >> width;
                
                if(width <= 0)
                {
                    cout << "Please enter a positive number.";
                }
                
                else
                {
                    area = 2 * ((width * length) + (height * length) + (height * width));
                    cout << setprecision(2);
                    cout << "The area of the rectangular prism is " << area << "." <<endl;
                }
                
                break;
                
                
            case 10:
                cout << "What is the radius of the base? ";
                cin >> radius;
                
                if(radius <= 0)
                {
                    cout << "Please enter a positive number.";
                }
                
                cout << "What is the height? ";
                cin >> height;
                
                if(height <= 0)
                {
                    cout << "Please enter a positive number.";
                }
                
                else
                {
                    area = 2 * PI * (radius + height);
                    cout << setprecision(2);
                    cout << "The area of the cylinder is " << area << "." << endl;
                }
                
                break;
                
                
            case 11:
                cout << "What is the radius? ";
                cin >> radius;
                
                if(radius <= 0)
                {
                    cout << "Please enter a positive number.";
                }
                
                cout << "What is the slant height? ";
                cin >> height;
                
                if(height <= 0)
                {
                    cout << "Please enter a positive number.";
                }
                
                else
                {
                    area = PI * (radius + height);
                    cout << setprecision(2);
                    cout << "The area of the cylinder is " << area << "." << endl;
                }
                
                break;
                
                
            case 12:
                cout << "What is the radius? ";
                cin >> radius;
                
                if(radius <= 0)
                {
                    cout << "Please enter a positive number.";
                }
                
                else
                {
                    area = 4 * PI * pow(radius, 2);
                    cout << setprecision(2);
                    cout << "The area of the sphere is " << area << "." << endl;
                }
                
                break;
                
                
            case 13:
                cout << "What is the radius? ";
                cin >> radius;
                
                if(radius <= 0)
                {
                    cout << "Please enter a positive number.";
                }
                
                else
                {
                    area = 3 * PI * pow(radius, 2);
                    cout << setprecision(2);
                    cout << "The area of the hemisphere is " << area << "." << endl;
                }
                
                
                break;
                
                
            case 14:
                cout << "The program is ending." << endl;
                break;
                
            default:
                cout << "Your choice was invalid. You must choose between 1-14.";
                
        }
        
    }
    
    return 0;
}

