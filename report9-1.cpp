#include<iostream>
#include<cmath>
#include<random>
using namespace std;

struct Point{
    double x;
    double y;
};

class Circle{
    private:
        Point c;
        double r;
    public:
        Circle(){
            c.x = 10;
            c.y = 10;
            r = 10;
        }
        Circle(Point point,double a){
            c = point;
            r = a;
        }
        bool contains(const Point& p){
            double x = p.x - c.x;
            double y = p.y - c.y;
            if(sqrt((x * x) + (y * y)) <= r){
                return true;
            }
            return false;
        }
};
std::random_device rnd;
std::mt19937 mt(rnd());
std::uniform_int_distribution<> rnd0(0, 100);

Point randomPoint(){
    Point c;
    c.x = rnd0(mt)/100.;
    c.y = rnd0(mt)/100.;
    return c;
}

int main(void){
    unsigned long double count;
    Point p = {0,0};
    Circle circle(p,1);
    long long int num = 10000000000;
    for(long long int i = 0;i < num;i++){
        Point q = randomPoint();
        if(circle.contains(q)){
            count+=1;
        }
    }
    cout << 4*count/num << endl;
}