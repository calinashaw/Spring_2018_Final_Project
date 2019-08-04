//
// Created by cshaw on 4/24/2018.
//

#pragma once

#include "ofMain.h"


class FacialFeatures {

private:

    int x_position;
    int y_position;

    ofImage image1;
    ofImage image2;
    ofImage image3;
    ofImage image4;

public:

    void drawFeature(int x, int y, );
    void loadimages();
};

