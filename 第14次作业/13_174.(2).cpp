#include<iostream>
using namespace std;
#include<math.h>
#include<exception>
#include<stdexcept>
 
struct Point{
	int x;
	int y;
	Point(){
	}
	Point(int x,int y):x(x),y(y){
	}
	Point(const Point& p):x(p.x),y(p.y){
	}
	
	float distance(const Point p){
		return sqrt(pow((this->x - p.x),2)+ pow((this->y - p.y),2));
	}
}; 

struct Triangel{
	Point p1;
	Point p2;
	Point p3;
	
	float edge1;
	float edge2;
	float edge3;
	
	float perimeter;
	float area; 

	
	Triangel(Point p1,Point p2,Point p3):p1(p1),p2(p2),p3(p3){
		float d1 = p1.distance(p2);
		float d2 = p1.distance(p3);
		float d3 = p2.distance(p3);
		bool flag = true;
		if(d1+d2<=d3 || abs(d1-d2)>=d3){
			flag = false;
		}
		else if(d1+d3<=d2 || abs(d1-d3)>=d2){
			flag = false;
		}
		else if(d2+d3<=d1 || abs(d2-d3)>=d1){
			flag = false;
		}
				
        if(flag){
	      this->edge1 = d1;
	      this->edge2 = d2;
	      this->edge3 = d3;
	    }
	    else{
	    	throw "is a illege triangel";
		}
	    
	    
	}
	
	float getPerimeter(){
		return  (edge1+edge2+edge3);
	}
	float getArea(){
		float s = (edge1+edge2+edge3)/2;
		return sqrt(s*(s-edge1)*(s-edge2)*(edge3));
	}
};

int main(){
	Point p1 = Point(0,0),p2 = Point(2,0),p3 = Point(1,0);
	try{	
	Triangel tri1 = Triangel(p1,p2,p3);	
	tri1.area = tri1.getArea();
	tri1.perimeter = tri1.getPerimeter();
	cout<<tri1.edge1<<" "<<tri1.edge2<<" "<<tri1.edge3<<endl;
	cout<<tri1.perimeter<<" "<<tri1.area;
    }
    catch(char const * error){
	    	cout<<"tri1 "<<error;
	}
	cout<<endl;
	p2.x = 0;
	p2.y = 1; 
	try{	
	Triangel tri2 = Triangel(p1,p2,p3);	
	tri2.area = tri2.getArea();
	tri2.perimeter = tri2.getPerimeter();
	cout<<tri2.edge1<<" "<<tri2.edge2<<" "<<tri2.edge3<<endl;
	cout<<tri2.perimeter<<" "<<tri2.area;
    }
    catch(char const * error){
	    	cout<<"tri2 "<<error;
	}
	return 0;
}
