/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bishop.cpp
 * Author: Tyler C
 * 
 * Created on December 4, 2020, 2:09 PM
 */

#include "Bishop.h"

Bishop::Bishop() : Pieza() {
}

Bishop::Bishop(const Bishop& orig) {
}

Bishop::~Bishop() {
}

bool Bishop::validarMovimiento(int origen_y, int origen_x, int destination_y, int destination_x) {
    if (((destination_y + destination_x == 9) || (destination_y + destination_x == 8))) {
        return true;
    } else if (((destination_y + destination_x <= origen_y + origen_x - 2) || (destination_y + destination_x >= origen_y + origen_x + 2))) {
        return true;
    } else if ((destination_y + destination_x == 5)) {
        return true;
    } else if (((destination_y + destination_x <= origen_y + origen_x - 2) || (destination_y + destination_x >= origen_y + origen_x + 2))) {
        return true;
    } else {
        return false;
    }
}

