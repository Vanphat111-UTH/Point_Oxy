#include <iostream>
#include <fstream>
#include "Point.h"
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    //Doc file data.txt
    ifstream fi("data.txt");
    int n;
    fi >> n; //doc so luong diem
    vector<Point> lstPoint;
    for (int i = 0; i < n; i++)
    {
        Point* ptr=new Point(0,0);
        fi >> *ptr;
        lstPoint.push_back(*ptr);
    }
    fi.close();
    //Sap xep theo khoang cach den goc toa do O(0,0)
    sort(lstPoint.begin(), lstPoint.end());
    //In ra các diem theo dinh dang (x1,y) (x2,y2)... (xn,yn)
    for (int i = 0; i < n; i++)
        cout << lstPoint[i] << " ";

    
    // Point p1(1, 2), p2(2, 4);
    // fi >> p2;
    // cout << p1 << endl << p2 << endl;
    // cout << (p1 < p2);


    // ifstream fi("data.txt");
    // vector<Point> lstPoint;
    // float x, y;
    // if (fi >> x >> y) { 
    // Point* ptr = new Point(x, y);
    // cout << *ptr << endl; // Kiểm tra dữ liệu đọc vào
    // lstPoint.push_back(*ptr);
    // } else {
    // cerr << "Loi khi doc du lieu" << endl;
    // }   


    return 0;
}