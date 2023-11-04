//不知道它是否会起效……
#include <iostream>
#include <cmath>
using namespace std;

// 定义一个函数，根据三角形三边计算面积，使用海伦公式
double area(double a, double b, double c) {
  // 计算半周长
  double s = (a + b + c) / 2;
  // 计算面积
  double area = sqrt(s * (s - a) * (s - b) * (s - c));
  // 返回面积
  return area;
}

int main() {
  // 定义三个变量，存储三角形三边
  double a, b, c;
  // 输入三角形三边
  cout << "请输入三角形三边（以空格分隔）：" << endl;
  cin >> a >> b >> c;
  // 调用函数，计算面积
  double result = area(a, b, c);
  // 输出结果
  cout << "三角形的面积是：" << result << endl;
  return 0;
}
