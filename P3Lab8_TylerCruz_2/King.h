/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   King.h
 * Author: Tyler C
 *
 * Created on December 4, 2020, 2:08 PM
 */

#ifndef KING_H
#define KING_H
#include <string>
using std::string;

#include "Pieza.h"

class King :public Pieza{
public:
    King();
    King(const King& orig);
    virtual ~King();
    
    virtual bool validarMovimiento(int,int,int,int);
    
private:
    string location;
};

#endif /* KING_H */

