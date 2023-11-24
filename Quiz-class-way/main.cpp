//
//  main.cpp
//  Quiz-class-way
//
//  Created by Nikan Pourreza on 11/16/23.
//

#include <iostream>
#include <cmath>
#include <sstream>
#include <string>
#include <limits>
#include <ncurses.h>
#include <unistd.h>


using namespace std;



class circle {
    
private: double radius;
    
public: 
    double calculateArea_C(){
        double C_area = radius*radius* M_PI;
        return C_area;
    }
    void setRadius (double r){
        radius = r;
    }
    
    double getRadius (){
        return radius;
    }
 
    
    
};


class rectangle {
    
private: double Length , Width ;
    
    
public: 
    double calculateArea_R(){
        double R_area = Length*Width;
        return R_area;
    }
    void setL_W(double l , double w){
        Length = l ;
        Width = w ;
    }
    
    double getL(){
        return Length ;
    }
    
    double getW(){
        return Width;
    }
    
};



class shape : public circle , public rectangle {

//private: double area;
  
public: 
    void Circle_Area(string subject){
        cout << subject << calculateArea_C() << " cm2" ;
    }
    void Rectangle_Area(string subject){
        cout << subject <<calculateArea_R() << " cm2\n" <<"***********\n";
    }
    
};



int main (){
    shape c = shape();
    
    double m ;
    cout << "Enter the size of radius please : " ;
    cin >> m ;
    
    c.setRadius(m);
    cout << "Circle radius: " << c.getRadius();
    cout << "\nProcessing....." ;
    
    sleep(2);
    c.Circle_Area("\n\nCircle Area: ");
    cout << "\n***********";
    
    double q , t ;
    cout << "\nEnter the size of length please : ";
    cin >> q ;
    
    cout << "Enter the size of width please : ";
    cin >> t ;
    
    c.setL_W(q, t);
    cout << "Rectangle: Lenght= " << c.getL() << "   Width=" << c.getW();
    cout << "\nProcessing....." ;
    
    sleep(3);
    c.Rectangle_Area("\n\nRectangle Area: ");
    // return 0;
};
