/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Partida.cpp
 * Author: Tyler C
 * 
 * Created on December 4, 2020, 3:02 PM
 */

#include "Partida.h"

Partida::Partida() {
}

Partida::Partida(const Partida& orig) {
}

Partida::~Partida() {
}

void Partida::writeFile(){
    ofstream write;
    write.open("bitacoraPartidas.txt",std::ofstream::app);
    //Escribir<<c<<";"<<n<<";"<<e<<endl;
    write.close();
}

