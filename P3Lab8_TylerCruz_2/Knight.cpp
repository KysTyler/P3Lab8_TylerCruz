/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Knight.cpp
 * Author: Tyler C
 * 
 * Created on December 4, 2020, 2:10 PM
 */

#include "Knight.h"

Knight::Knight():Pieza() {
}

Knight::Knight(const Knight& orig) {
}

Knight::~Knight() {
}

bool Knight::validarMovimiento(int origen_y, int origen_x, int destination_y, int destination_x){
    if ( (destination_y == origen_y + 2) && (destination_x = origen_x + 1) ) {
        return true;
    } else if ( (destination_y == origen_y + 2) && (destination_x = origen_x - 1) ) {
        return true;
    } else if ( (destination_y == origen_y - 2) && (destination_x = origen_x - 1) ) {
        return true;
    } else if ( (destination_y == origen_y - 2) && (destination_x = origen_x + 1) ) {
        return true;
    } else if ( (destination_x == origen_x + 2) && (destination_y = origen_y + 1) ) {
        return true;
    } else if ( (destination_x == origen_x + 2) && (destination_y = origen_y - 1) ) {
        return true;
    } else if ( (destination_x == origen_x - 2) && (destination_y = origen_y - 1) ) {
        return true;
    } else if ( (destination_x == origen_x + 2) && (destination_y = origen_y + 1) ) {
        return true;
    } else {
        return false;
    }
}

