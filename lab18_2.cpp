#include<iostream>
#include<algorithm>

using namespace std;

struct Rect{
	double x,y,w,h;
};

double  overlap(Rect *R1, Rect *R2){
    double mx_x, mx_y, mn_x, mn_y;
    mx_x = min(R1->x+R1->w,R2->x+R2->w);
    mn_x = max(R1->x,R2->x);
    mx_y = max(R1->y-R1->h,R2->y-R2->h);
    mn_y = min(R1->y,R2->y);
    if ((mx_x-mn_x)*(mn_y-mx_y) > 0) return ((mx_x-mn_x)*(mn_y-mx_y));
	else return 0;
}
