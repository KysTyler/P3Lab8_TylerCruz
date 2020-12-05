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
string minizeString(string location);

/*
 * 
 */
int main(int argc, char** argv) {
    char** playingBoard = NULL;
    int playing = 1;
    playingBoard = GenerateMatrix(8, 8);
    playingBoard = fillMatrix(playingBoard, 8, 8);
    Pieza* kingW = new King();
    Pieza* kingB = new King();
    playingBoard[7][4] = 'K';
    playingBoard[0][4] = 'k';
    printMatrix(playingBoard, 8, 8);
    int mainOption = 0;
    while (mainOption != 3) {
        cout << "Jugar Partida " << endl
                << "Recrear Partidad " << endl << "Salir" << endl;
        cout << "Ingrese su opcion: " << endl;
        cin >> mainOption;
        switch (mainOption) {
            case 1:
            {
                Partida* game = new Partida();
                string gameName = "";
                int option;
                cout << "Ingrese el nombre del game: " << endl;
                cin >> gameName;
                game->writeFile(gameName);
                cout << "Menu de escoger pieza: " << endl
                        << "1) Queen" << endl << "2) Rook" << endl << "3) Bishop" << endl << "4) Knight" << endl
                        << "5) Pawn" << endl;
                cin >> option;
                switch (option) {
                    case 1:
                    {
                        game->writeFile("Queen");
                        Pieza* queenW = new Queen();
                        Pieza* queenB = new Queen();
                        break;
                    }
                    case 2:
                    {
                        game->writeFile("Rook");
                        Pieza* rookW = new Rook();
                        Pieza* rookB = new Rook();
                        break;
                    }
                    case 3:
                    {
                        game->writeFile("Bishop");
                        Pieza* bishopW = new Bishop();
                        Pieza* bishopB = new Bishop();
                        break;
                    }
                    case 4:
                    {
                        game->writeFile("Knight");
                        Pieza* knightW = new Knight();
                        Pieza* knightB = new Knight();
                        break;
                    }
                    case 5:
                    {
                        game->writeFile("Pawn");
                        Pieza* pawnW = new Pawn();
                        Pieza* pawnB = new Pawn();
                        break;
                    }
                }
                while (playing) {
                    string move1 = "", move2 = "";
                    cout << "Ingrese movimiento Player White: " << endl;
                    cin >> move1;
                    cout << "Ingrese movimiento Player Black: " << endl;
                    cin >> move2;
                    
                    cout << "Do you want to continue playing player Black.....?" << endl
                            << "yes = 1" << endl << "no = 0" << endl;
                    cin >> playing;
                    if (!playing)
                        playing = 0;
                    break;
                }
                break;
            }
            case 2:
            {
                //just changing postitions to numbers
               string res = minizeString("[e1,e2]");
               cout <<"this" <<res <<endl;
                
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
                matrix[i][j] = '.';
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
//[e1,e2]

string minizeString(string location) {
    //first part
    if (location[1] == 'a')
        location[1] = '0';
    else if (location[1] == 'b')
        location[1] = '1';
    else if (location[1] == 'c')
        location[1] = '2';
    else if (location[1] == 'd')
        location[1] = '3';
    else if (location[1] ==  'e')
        location[1] = '4';
    else if (location[1] == 'h')
        location[1] = '5';
    else if (location[1] == 'f')
        location[1] = '6';
    else if (location[1] == 'g')
        location[1] = '7';

    //second  part
    if (location[4] == 'a')
        location[4] = '0';
    else if (location[4] == 'b')
        location[4] = '1';
    else if (location[4] == 'c')
        location[4] = '2';
    else if (location[4] == 'd')
        location[4] = '3';
    else if (location[4] == 'e')
        location[4] = '4';
    else if (location[4] == 'h')
        location[4] = '5';
    else if (location[4] == 'f')
        location[4] = '6';
    else if (location[4] == 'h')
        location[4] = '7';
    
    return location;


}
