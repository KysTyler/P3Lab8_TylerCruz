/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rook.cpp
 * Author: Tyler C
 * 
 * Created on December 4, 2020, 2:09 PM
 */

#include "Rook.h"

Rook::Rook():Pieza() {
}

Rook::Rook(const Rook& orig) {
}

Rook::~Rook() {
}

bool Rook::validarMovimiento(int origen_y, int origen_x, int destination_y, int destination_x){
    if ( (destination_y >= 0 && destination_y <= 7)  && destination_x == origen_x ) {
        return true;
    } else if ( (destination_x >= 0 && destination_x <= 7)  && destination_y == origen_y ) {
        return true;
    } else {
        return false;
    }
}

