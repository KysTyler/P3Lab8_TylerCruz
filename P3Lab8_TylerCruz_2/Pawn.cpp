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

bool Pawn::validarMovimiento(){
    return true;
}

