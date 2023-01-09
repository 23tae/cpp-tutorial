#include <iostream>
#include <cmath>

class Point {
  int x, y;

 public:
  Point(int pos_x, int pos_y);
  int get_x();
  int get_y();
};

Point::Point(int pos_x, int pos_y)
{
	x = pos_x;
	y = pos_y;
}

int Point::get_x() {
  return x;
}

int Point::get_y() {
  return y;
}

class Geometry {
 public:
  Geometry() {
    num_points = 0;
  }

  void AddPoint(Point point) {
    point_array[num_points ++] = new Point(point.get_x(), point.get_y());
  }

  // 모든 점들 간의 거리를 출력하는 함수
  void PrintDistance();

  // 모든 점들을 잇는 직선들 간의 교점의 수를 출력해주는 함수
  void PrintNumMeets();

private:
  // 점 100 개를 보관하는 배열.
  Point* point_array[100];
  int num_points;
};

void  Geometry::PrintDistance() {
  float dist;
  int dist_square;

  for (int i = 0; i < num_points; i++)
  {
    for (int j = i+1; j < num_points; j++)
    {
      dist_square = pow(point_array[i]->get_x() - point_array[j]->get_x() , 2) + \
      pow(point_array[i]->get_y() - point_array[j]->get_y() , 2);
      dist = sqrt(dist_square);
      std::cout << "distance between point(" << i << "), point(" << j << ") is " << dist << std::endl;
    }
  }
}

int main() {
  Point point1(1, 6);
  Point point2(4, 10);

  Geometry geo;
  geo.AddPoint(point1);
  geo.AddPoint(point2);
  geo.PrintDistance();
}