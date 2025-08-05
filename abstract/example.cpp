#include <iostream>
using namespace std;
class polygon{
    public:
     int width, height;
     public:
     void set_data(int h,int w){
        height = h;
        width = w;
     }
};
class rectangle : public polygon{
    public:
        int area(){
            return width * height;
        }
};
class triangle : public polygon{
    public:
        int area(){
            return (width * height) / 2;
        }
};
int main(){
    rectangle r;
    triangle t;
    polygon *p1,*p2;
    p1 = &r; //upcasting
    p2 = &t; //upcasting
    p1->set_data(5,6);
    p2->set_data(5,6);
    cout<<"The area of rectangle = " <<r.area()<<endl;
    cout << "The area of triangle = "<<t.area()<<endl;
    return 0;
}