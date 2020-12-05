/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rook.h
 * Author: Tyler C
 *
 * Created on December 4, 2020, 2:09 PM
 */

#ifndef ROOK_H
#define ROOK_H
#include <string>
using std::string;
#include "Pieza.h"
class Rook :public Pieza{
public:
    Rook();
    Rook(const Rook& orig);
    virtual ~Rook();
    
    virtual bool validarMovimiento(int,int,int,int);
private:
    string location;
};

#endif /* ROOK_H */

