/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pieza.h
 * Author: Tyler C
 *
 * Created on December 4, 2020, 12:55 PM
 */

#ifndef PIEZA_H
#define PIEZA_H

class Pieza {
public:
    Pieza();
    Pieza(const Pieza& orig);
    virtual ~Pieza();
    
    virtual bool validarMovimiento();
private:

};

#endif /* PIEZA_H */

