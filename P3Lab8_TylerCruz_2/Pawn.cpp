/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pawn.cpp
 * Author: Tyler C
 * 
 * Created on December 4, 2020, 2:10 PM
 */

#include "Pawn.h"

Pawn::Pawn() :Pieza(){
}

Pawn::Pawn(const Pawn& orig) {
}

Pawn::~Pawn() {
}

bool Pawn::validarMovimiento(int origen_y, int origen_x, int destination_y, int destination_x){
    if ( (destination_y == origen_y + 1) && destination_y >= 0 && (destination_x == origen_x) ) {
        return true;
    } else if ( (destination_y == origen_y - 1) && destination_y >= 0 && (destination_x == origen_x) ) {
        return true;
    } else {
        return false;
    }
}

