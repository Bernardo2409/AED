#include "Square.h"
#include <cassert>
#include <iostream>
#include <string>
#include "Point.h"
#include "Rectangle.h"

Square::Square(void) {
  SetCenter(Point(0.0, 0.0));
  SetColor("black");
  SetWidth(1.0);
  SetHeight(1.0);
}

Square::Square(Point center, const std::string& color, double edge) {
  assert(edge > 0.0);
  SetCenter(center);
  SetColor(color);
  SetWidth(edge);
  SetHeight(edge);
}

Square::Square(double x, double y, const std::string& color, double edge) {
  assert(edge > 0.0);
  SetCenter(Point(x, y));
  SetColor(color);
  SetWidth(edge);
  SetHeight(edge);
}

double Square::GetEdgeLength(void) const {
  return GetWidth();
}

void Square::SetEdgeLength(double length) {
  assert(length > 0.0);
  SetWidth(length);
  SetHeight(length);
}

std::string Square::GetClassName(void) const {
  return "Square";
}

Square::~Square() {}

std::ostream& operator<<(std::ostream& os, const Square& obj) {
  os << "Center: " << obj.GetCenter() << std::endl;
  os << "Color: " << obj.GetColor() << std::endl;
  os << "Edge = " << obj.GetEdgeLength() << std::endl;
  return os;
}

std::istream& operator>>(std::istream& is, Square& obj) {
  Point center;
  std::string color;
  double length;
  is >> center >> color >> length;
  obj.SetCenter(center);
  obj.SetColor(color);
  obj.SetEdgeLength(length);
  return is;
}