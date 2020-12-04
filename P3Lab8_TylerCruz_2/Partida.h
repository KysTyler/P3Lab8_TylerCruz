/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Partida.h
 * Author: Tyler C
 *
 * Created on December 4, 2020, 3:02 PM
 */

#ifndef PARTIDA_H
#define PARTIDA_H
#include "fstream"
#include <string>
#include <vector>
#include "Pieza.h"
using std::ofstream;
using std::ifstream;
using std::string;
using std::vector;

class Partida {
public:
    Partida();
    Partida(const Partida& orig);
    virtual ~Partida();
    
    void writeFile();
private:
    ofstream write;
    string name;
    vector<string> listMovements;
    Pieza piece;

};

#endif /* PARTIDA_H */

