/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   King.cpp
 * Author: Tyler C
 * 
 * Created on December 4, 2020, 2:08 PM
 */

#include "King.h"

King::King():Pieza() {
}

King::King(const King& orig) {
}

King::~King() {
}

bool King::validarMovimiento(int origen_y, int origen_x, int destination_y, int destination_x){
    if ( ((destination_x == origen_x + 1) || (destination_x == origen_x - 1)) && destination_y == origen_y && (origen_x - 1 > 0 || origen_x + 1 > 0) ) {
        return true;
    } else if ( ((destination_y == origen_y + 1) || (destination_y == origen_y - 1)) && destination_x == origen_x && (origen_y - 1 > 0 || origen_y + 1 > 0) ) {
        return true;
    } else if ( (destination_y == origen_y + 1 && destination_x == origen_x + 1) && origen_x + 1 > 0 && origen_y + 1 > 0 ) {
        return true;
    } else if ( (destination_y == origen_y - 1 && destination_x == origen_x - 1) && origen_x - 1 > 0 && origen_y - 1 > 0 ) {
        return true;
    } else if ( (destination_y == origen_y - 1 && destination_x == origen_x + 1) && origen_x + 1 > 0 && origen_y - 1 > 0 ) {
        return true;
    } else if ( (destination_y == origen_y + 1 && destination_x == origen_x - 1) && origen_x - 1 > 0 && origen_y + 1 > 0 ) {
        return true;
    } else {
        return false;
    }
}

