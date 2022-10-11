// NAMA		: Surya Fadli Alamsyah
// NRP		: 5025221059
// Jurusan	: Teknik Informatika

#include <iostream>
#include <cmath>

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

using namespace std;

int main() {

    int v, v0, xmax;
    float rad, vt, vtan;


    //mencari kecepatan awal

    cin >> v;
    if (v <=10)
    {
        v0 = v - 1;
    }else if (v <= 20)
    {
        v0 = v - 3;
    }else if (v <= 30)
    {
        v0 = v - 5;
    }


    //jarak horizontal maksimum
    
    rad = SUDUT * (M_PI / 180);
    
    xmax = pow(v0,2) / GRAVITASI * sin(2 * rad);


    //mencari kecepatan tangensial

    vt = sqrt(xmax * GRAVITASI / sin(2 * rad));

    if (vt <= 10)
    {
        vtan = vt + 1;
    }else if (vt <= 20)
    {
        vtan = vt + 3;
    }else if (vt <= 30)
    {
        vtan = vt + 5;
    }
    
    //output 
    
    cout << xmax << " " << vtan;

    return 0;
}