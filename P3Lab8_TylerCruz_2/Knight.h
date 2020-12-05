/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Knight.h
 * Author: Tyler C
 *
 * Created on December 4, 2020, 2:10 PM
 */

#ifndef KNIGHT_H
#define KNIGHT_H
#include <string>
using std::string;
#include "Pieza.h"

class Knight :public Pieza{
public:
    Knight();
    Knight(const Knight& orig);
    virtual ~Knight();
    
    virtual bool validarMovimiento(int,int,int,int);
private:
    string location;
};

#endif /* KNIGHT_H */

