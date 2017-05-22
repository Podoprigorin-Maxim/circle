// circle.h
class Circle
{
private:
	double _x;
	double _y;
	double _r;

public:
	Circle(double x, double y, double r);
	~Circle();

	double getCenterX();
	double getCenterY();
	double getRadius();

	void move(double dx, double dy);
	void scale(double k);
	double calculateArea();
};
