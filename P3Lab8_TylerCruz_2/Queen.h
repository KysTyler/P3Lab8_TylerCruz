/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Queen.h
 * Author: Tyler C
 *
 * Created on December 4, 2020, 2:09 PM
 */

#ifndef QUEEN_H
#define QUEEN_H
#include <string>
using std::string;
#include "Pieza.h"
class Queen :public Pieza{
public:
    Queen();
    Queen(const Queen& orig);
    virtual ~Queen();
    virtual bool validarMovimiento();
private:
    string location;
};

#endif /* QUEEN_H */

