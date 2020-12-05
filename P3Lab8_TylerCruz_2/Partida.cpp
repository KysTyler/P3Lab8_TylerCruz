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

void Partida::writeFile(string word){
    ofstream write;
    write.open("bitacoraPartidas.txt",std::ofstream::app);
//    write<<word<<";"<<n<<";"<<e<<endl;
    write<<word<<endl;
    write.close();
}

