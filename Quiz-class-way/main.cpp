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


using namespace std;



class circle {
    
private: double radius;
    
public: double calculateArea_C(){
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
    
    
public: double calculateArea_R(){
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
  
public: void Circle_Area(string subject){
    cout << subject << calculateArea_C() << " cm2" ;
}
    void Rectangle_Area(string subject){
        cout << subject <<calculateArea_R() << " cm2\n" <<"***********\n";
    }
    
};



int main (){
    shape c = shape();
    c.setRadius(10);
    cout << "Circle radius: " << c.getRadius();
    c.Circle_Area("\nCircle Area: ");
    cout << "\n***********";
    c.setL_W(3.5, 4);
    cout << "\nRectangle: Lenght= " << c.getL() << "   Width=" << c.getW();
    c.Rectangle_Area("\nRectangle Area: ");
    // return 0;
};
