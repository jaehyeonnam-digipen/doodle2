// Name       : Jaehyeon Nam
// Assignment : Generate Points Image
// Course     : CS120
// Term & Year: Fall 2020

#include <doodle/doodle.hpp>
#include<iostream>
using namespace doodle;

int main(void)
{
    using std::cout;
    using std::cin;

    int ww=0;
    int wh=0;
    int px=0;
    int py=0;

    cout << "Enter in desired width: ";
    cin >> ww;
    cout << "Enter in desired height: ";
    cin >> wh;
    create_window(ww, wh);
    clear_background(120);
    no_outline();
    cout << "Enter in your points: ";
 
    while(cin >> px >> py)
    {
    draw_ellipse(px, py, 4, 4);
    }
    const Image image = capture_screenshot_to_image();
    image.SaveToFile("points.png");

    return 0;
}


