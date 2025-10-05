#include <iostream>
using namespace std;

struct Point {
    double x, y;
};
// Функция для вычисления ориентации трех точек
int orientation(Point a, Point b, Point c) {
    double value = (b.y - a.y) * (c.x - b.x) - (b.x - a.x) * (c.y - b.y);
    if (value == 0) return 0;      // точки коллинеарны
    return (value > 0) ? 1 : -1;   // 1 - по часовой, -1 - против часовой
}
// Проверяет, лежит ли точка c на отрезке ab
bool onSegment(Point a, Point b, Point c) {
    return (c.x <= max(a.x, b.x) && c.x >= min(a.x, b.x) &&
        c.y <= max(a.y, b.y) && c.y >= min(a.y, b.y));
}
// Основная функция проверки пересечения отрезков
bool doSegmentsIntersect(Point A, Point B, Point C, Point D) {
    // Вычисляем ориентации для всех комбинаций
    int o1 = orientation(A, B, C);
    int o2 = orientation(A, B, D);
    int o3 = orientation(C, D, A);
    int o4 = orientation(C, D, B);
    // Основной случай: точки разных отрезков лежат по разные стороны
    if (o1 != o2 && o3 != o4) {
        return true;
    }
    // Особые случаи, когда точки коллинеарны
    // Точка C лежит на отрезке AB
    if (o1 == 0 && onSegment(A, B, C)) return true;
    // Точка D лежит на отрезке AB
    if (o2 == 0 && onSegment(A, B, D)) return true;
    // Точка A лежит на отрезке CD
    if (o3 == 0 && onSegment(C, D, A)) return true;
    // Точка B лежит на отрезке CD
    if (o4 == 0 && onSegment(C, D, B)) return true;
    return false;
}

int main() {
    Point A, B, C, D;
    cout << "Coord 1  otrezka (x1 y1 x2 y2): ";
    cin >> A.x >> A.y >> B.x >> B.y;
    cout << "Coord 2 otrezka (x3 y3 x4 y4): ";
    cin >> C.x >> C.y >> D.x >> D.y;
    if (doSegmentsIntersect(A, B, C, D))
        cout << "Peresekautsia" << endl;
    else
        cout << "No" << endl;
    return 0;
}