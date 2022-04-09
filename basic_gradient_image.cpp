#include <iostream>

using namespace std;

void image_generator(int nx, int ny) {
    cout << "P3" << endl;             // type of image
    cout << nx << " " << ny << endl;  // dimensions of the image
    cout << 255 << endl;              // indicates the maximum value for a color

    for (int j = ny - 1; j >= 0; j--) {
        for (int i = 0; i < nx; i++) {
            float r = (float)i / nx;
            float g = (float)j / ny;
            float b = 0.2;

            int ir = (int)(255.99 * r);
            int ig = (int)(255.99 * g);
            int ib = (int)(255.99 * b);

            cout << ir << " " << ig << " " << ib << endl;
        }
    }
}

int main() {
    int nx = 200;
    int ny = 100;

    image_generator(nx, ny);

    return 0;
}