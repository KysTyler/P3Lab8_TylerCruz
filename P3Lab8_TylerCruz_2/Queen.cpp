/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Queen.cpp
 * Author: Tyler C
 * 
 * Created on December 4, 2020, 2:09 PM
 */

#include "Queen.h"

Queen::Queen() :Pieza(){
}

Queen::Queen(const Queen& orig) {
}

Queen::~Queen() {
}

bool Queen::validarMovimiento(int origen_y, int origen_x, int destination_y, int destination_x){
    if ( (destination_y >= 0 && destination_y <= 7)  && destination_x == origen_x ) {
        return true;
    } else if ( (destination_x >= 0 && destination_x <= 7)  && destination_y == origen_y ) {
        return true;
    } else if ( (destination_x + destination_y == origen_x + origen_y) ) {
        return true;
    } else if ( (destination_x + destination_y >= origen_x + origen_y + 2) ) {
        return true;
    } else if ( ((destination_x + destination_y <= origen_x + origen_y - 2)) ) {
        return true;
    }
    else {
        return false;
    }
}

