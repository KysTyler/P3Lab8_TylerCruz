/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Tyler C
 *
 * Created on December 4, 2020, 12:50 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>

#include "Pieza.h"
#include "Partida.h"
#include "King.h"
#include "Queen.h"
#include "Rook.h"
#include "Bishop.h"
#include "Knight.h"
#include "Pawn.h"

using namespace std;

char** GenerateMatrix(int row, int col);
char** fillMatrix(char**& matrix, int row, int col);
void printMatrix(char**& matrix, int row, int col);

/*
 * 
 */
int main(int argc, char** argv) {
    char** playingBoard = NULL;
    playingBoard = GenerateMatrix(8, 8);
    playingBoard = fillMatrix(playingBoard,8,8);
    int mainOption = 0;
    while(mainOption != 3){
        cout << "Jugar Partida " << endl
                << "Recrear Partidad " << endl;
        cout << "Ingrese su opcion: " << endl;
        cin >> mainOption;
        switch(mainOption){
            case 1:{
                string gameName = "";
                int option;
                cout << "Ingrese el nombre del game: " <<endl;
                cin >> gameName;
                cout << "Menu de escoger pieza: " << endl
                        << "1) Queen" << endl << "2) Rook" << endl << "3) Bishop" << endl << "4) Knight" << endl
                        << "5) Pawn" << endl;
                cin >> option;
                switch(option){
                    case 1:{
                        break;
                    }
                    case 2:{
                        break;
                    }
                    case 3:{
                        break;
                    }
                    case 4:{
                        break;
                    }
                    case 5:{
                        break;
                    }
                }
                break;
            }
            case 2:{
                break;
            }
        }
    }

    return 0;
}

char** GenerateMatrix(int row, int col) {
    if (row > 0 && col > 0) {
        char** charArray = new char*[row];
        for (int i = 0; i < row; i++) {
            charArray[i] = new char[col];
        }
        return charArray;
    }
    return NULL;
}
char** fillMatrix(char**& matrix, int row, int col) {
    if (row > 0 && col > 0 && matrix != NULL) {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                matrix[i][j] = ' ';
            }
        }
    }
    return matrix;
}

void printMatrix(char**& matrix, int row, int col) {
    if (row > 0 && col > 0 && matrix != NULL) {
        for (int i = 0; i < row; i++) {
            if (matrix[i] != NULL) {
                for (int j = 0; j < col; j++) {
                    cout << matrix[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
}

void writeTextFile(){
    string c, n, e;
    cout<<"Codigo: "; cin>>c;
    cout<<"Nombre: "; cin>>n;
    cout<<"Edad: "; cin>>e;
    ofstream Escribir;
    Escribir.open("./prueba.txt",ios::app);
    Escribir<<c<<";"<<n<<";"<<e<<endl;
    Escribir.close();
}
