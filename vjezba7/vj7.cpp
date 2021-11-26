//
// Created by antonio on 26. 11. 2021..
//

#include <iostream>
#include "point.h"
#include "view.h"

using namespace std;

int main() {
    int n;
    int m;
    vector<point> points;
    view myView = view();
    controller controller = myView.getController();
    cout << "Enter number of points: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++) {
        double x, y;
        cout << "Insert a point (x y): " << endl;
        cin >> x;
        cin >> y;
        point resultPoint = point(x, y);
        controller.insertPoint(resultPoint);
        points.push_back(resultPoint);
    }
    cout << "Insert how many lines you want: " << endl;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int index1, index2;
        cout << "Insert 2 indices of inserted points: " << endl;
        cin >> index1 >> index2;
        controller.insertLine(points[index1], points[index2]);
    }
    cout << "Result: " << endl;
    myView.printBoard();
}