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

Bishop::Bishop() :Pieza(){
}

Bishop::Bishop(const Bishop& orig) {
}

Bishop::~Bishop() {
}

bool Bishop::validarMovimiento(){
    return true;
}

