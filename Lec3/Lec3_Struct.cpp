#include <iostream>
using namespace std;

struct Point {
	int x;
	int y;
};
void print(Point p){
	cout << p.x << " " << p.y;
	cout << endl;
}
Point midPoint (Point a, Point b){
	Point c;
	c.x = (a.x + b.x)/2;
	c.y = (a.y + b.y)/2;
	return c;
}

struct Rect{
	int x;
	int y;
	int w;
	int h;
	bool contains(Point p){
		if (p.x <= x + w && p.x >= x && p.y <= y + h && p.y >= y){
			return true;
		}
		return false;
	}

};

struct ship{
	Rect rect;
	int dx;
	int dy;
	string id;
	void move(){
		rect.x = rect.x + dx;
		rect.y = rect.y + dy;
	}
	
};

void display(ship ship){
	cout << ship.id << " ";
	cout << ship.rect.x << " " << ship.rect.y << endl;
}
int main(){
	Point point;
	cin >> point.x >> point.y;
	Point point1;
	cin >> point1.x >> point1.y;
	Rect rect;
	cin >> rect.x >> rect.y >> rect.w >> rect.h;
	print(point);
	print (point1);
	cout << "Mid Point is ";
	print (midPoint(point, point1));
	if (rect.contains(point) == true) {
		cout << "contain";
	} else {
		cout << "not contain";
	}
	ship ship1;
	cin >>  ship1.id >> ship1.rect.x >> ship1.rect.y >> ship1.dx >> ship1.dy;
	ship ship2;
	cin >>  ship2.id >> ship2.rect.x >> ship2.rect.y >> ship2.dx >> ship2.dy;
	int loop = 0;
	while (loop < 10) {
    ship1.move(); ship2.move();
    display(ship1); display(ship2);
    loop++;
	}
	return 0;
}
