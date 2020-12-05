/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bishop.h
 * Author: Tyler C
 *
 * Created on December 4, 2020, 2:09 PM
 */

#ifndef BISHOP_H
#define BISHOP_H
#include <string>
using std::string;
#include "Pieza.h"

class Bishop :public Pieza{
public:
    Bishop();
    Bishop(const Bishop& orig);
    virtual ~Bishop();
    virtual bool validarMovimiento(int,int,int,int);
private:
    string location;
};

#endif /* BISHOP_H */

