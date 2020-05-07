/*
	@author Thomás Augusto Gouveia Chaves
	@version 07/05/2020 (d/m/y)
*/

#include <iostream>
#include <cmath>

using namespace std;
 
class Point{
private:
    double x, y;
public:
    Point(double x, double y){
        this->x = x;
        this->y = y;
    }

    double getX(){
        return x;
    }

    double getY(){
        return y;
    }

};

int main() {

    double x, y, distance;
    cin >> x;
    cin >> y;

    Point p1(x, y);

    cin >> x;
    cin >> y;

    Point p2(x, y);

    distance = sqrt(pow(p2.getX()-p1.getX(), 2) + pow(p2.getY()-p1.getY(), 2));

    cout.precision(4);

    cout << fixed << distance << "\n";

    return 0;
}