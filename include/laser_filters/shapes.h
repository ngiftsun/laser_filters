/*  Author: Nirmal GIFTSUN */

#ifndef GEOMETRIC_SHAPES_
#define GEOMETRIC_SHAPES_

namespace shapes
{

enum ShapeType {UNKNOWN,BOX, BOX_SEMICIRCLE_FACES,BOX_CURVED_SIDES};

struct Perimeter
{
    double x_min,x_max,y_max,y_min;

}

class Shape
{
public:
  Shape();
  virtual ~Shape();

  /** \brief The type of the shape */
  ShapeType type;
};


/** \brief Definition of a box with semicircle faces */
class Box_SemiCircle : public Shape
{
public:
  Box_SemiCircle();

  /** \brief  */
  Box_SemiCircle(double xdim, double ydim);


  point 

  /** \brief The type of the shape */
  static const std::string SHAPE_NAME;

  /** \brief Dimension of the box */
  double xdim, ydim;

  /** \brief Radius of the box faces */
  double xr,yr;    

  /** box perimeter */
  Perimeter bounds;
  


};


}