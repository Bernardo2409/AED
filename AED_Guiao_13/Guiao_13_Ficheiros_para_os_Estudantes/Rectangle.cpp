//
// Algoritmos e Estruturas de Dados - 2024/2025
//
// J. Madeira - April/May 2022
//
// COMPLETE the code, according to Rectangle.h
//

#include "Rectangle.h"

#include <cassert>
#include <iostream>
#include <string>

#include "Point.h"

Rectangle::Rectangle(void) {
  // Rectangle of width=1 and height=1 and centered at (0,0)
  width_ = 1.0;
  height_ = 1.0;
  SetCenter(Point(0.0, 0.0));
  SetColor("black");
}

Rectangle::Rectangle(Point center, const std::string& color, double width,
                     double height) {
  // Ensure that the width and height are larger than 0.0
  assert(width > 0.0 && height > 0.0);
  SetCenter(center);
  SetColor(color);
  width_ = width;
  height_ = height;
}

Rectangle::Rectangle(double x, double y, const std::string& color, double width,
                     double height) {
  // Ensure that the width and height are larger than 0.0
  assert(width > 0.0 && height > 0.0);
  SetCenter(Point(x, y));
  SetColor(color);
  width_ = width;
  height_ = height;
}

double Rectangle::GetHeight(void) const { return height_; }
void Rectangle::SetHeight(double length) {
  // Ensure that the height is larger than 0.0
  assert(length > 0.0);
  height_ = length;
}

double Rectangle::GetWidth(void) const { return width_; }
void Rectangle::SetWidth(double length) {
  // Ensure that the width is larger than 0.0
  assert(length > 0.0);
  width_ = length;
}

std::string Rectangle::GetClassName(void) const { return "Rectangle"; }

double Rectangle::Area(void) const {
  // Area = width * height
  return width_ * height_;
}

double Rectangle::Perimeter(void) const {
  // Perimeter = 2 * (width + height)
  return 2.0 * (width_ + height_);
}

std::ostream& operator<<(std::ostream& os, const Rectangle& obj) {
  os << "Center: " << obj.GetCenter() << std::endl;
  os << "Color: " << obj.GetColor() << std::endl;
  os << "Width = " << obj.width_ << std::endl;
  os << "Height = " << obj.height_ << std::endl;
  return os;
}

std::istream& operator>>(std::istream& is, Rectangle& obj) {
  Point center;
  std::string color;
  double width, height;

  is >> center >> color >> width >> height;

  obj.SetCenter(center);
  obj.SetColor(color);
  obj.SetWidth(width);
  obj.SetHeight(height);

  return is;
}