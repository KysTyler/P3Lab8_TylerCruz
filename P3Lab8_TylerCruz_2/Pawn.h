/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pawn.h
 * Author: Tyler C
 *
 * Created on December 4, 2020, 2:10 PM
 */

#ifndef PAWN_H
#define PAWN_H
#include <string>
using std::string;
#include "Pieza.h"
class Pawn :public Pieza{
public:
    Pawn();
    Pawn(const Pawn& orig);
    virtual ~Pawn();
    
    virtual bool validarMovimiento(int,int,int,int);
private:
    string location;
};

#endif /* PAWN_H */

