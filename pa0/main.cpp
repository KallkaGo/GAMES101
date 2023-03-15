#include<cmath>
#include<iostream>
#include<eigen3/Eigen/Core>
int main() {
	Eigen::Vector3f p(2.0f, 1.0f, 1.0f);
	Eigen::Matrix3f rotateMat, transMat;
	rotateMat << std::cos(45.0 / 180.0 * acos(-1)), -std::sin(45.0 / 180.0 * acos(-1)), 0,
		std::sin(45.0 / 180.0 * acos(-1)), std::cos(45.0 / 180.0 * acos(-1)), 0,
		0, 0, 1.0;

	transMat << 1.0, 0, 1.0,
		0, 1.0, 2.0,
		0, 0, 1.0;
	p = transMat * rotateMat * p;
	std::cout << "±ä»»ºóµÄP:" << p[0] << "," << p[1] << std::endl;
	std::cin.get();
}