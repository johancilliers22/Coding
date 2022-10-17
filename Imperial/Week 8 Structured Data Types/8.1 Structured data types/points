#include <iostream>
#include <cmath>
 
struct Point{
    double x;
    double y;
}; 
// the ; at the end is important
 
double distance_points(Point p1, Point p2){
    return std::sqrt(std::pow((p1.x - p2.x), 2) + std::pow((p1.y - p2.y), 2));
}
 
int main(){
 
    Point pa, pb;
 
    std::cout << "enter coordinates for the first point" << std::endl;
    std::cin >> pa.x >> pa.y;
 
    std::cout << "enter coordinates for the second point" << std::endl;
    std::cin >> pb.x >> pb.y;
 
    std::cout << "you entered the following points:" << std::endl;
    std::cout << "(" << pa.x << ", " << pa.y << ")" << std::endl;
    std::cout << "(" << pb.x << ", " << pb.y << ")" << std::endl;
 
    std::cout << "their distance is: " << distance_points(pa, pb) << std::endl;
 
}