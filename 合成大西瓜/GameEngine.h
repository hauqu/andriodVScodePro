/*
实现重力效果（匀速下落系统）

实现简单形状物体的碰撞算法 圆 和矩形

实现物体的职支撑算法，包括重心和支撑点的计算

无法支撑下的运动判断

非对心碰撞


*/
#include<cmath>
class point//二维点
{
public:
	double x;
    double y;
    point(double s1 ,double s2):
    x(s1),y(s2)
    {

    }

    double norn()
    {
        return sqrt(x*x+y*y);
    } 

};

class object
{

public:
	point o;//圆心位置
    point v;//速度
    int r;//半径
    
};





