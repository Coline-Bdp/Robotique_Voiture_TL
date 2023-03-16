#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int speed_m1 = 0.0;
int speed_m2 = 0.0;
int speed_m3 = 0.0;
int speed_m4 = 0.0;


int main() {
    Py_Initialize();

    PyObject *obj = Py_BuildValue("s", "control_car.py");   //crée un objet "obj" qui est une chaîne de caractères (qui est dans le fichier Python utilisé)
    FILE *file = _Py_fopen_obj(obj, "r+");  //ouvre le fichier Python "obj" en lecture écriture avec un nom "file"

    
    if(file != NULL) {      //vérifie si le pointeur de fichier est ouvert ou non

    /*C'est ici qu'on va foutre le switch suivant les cas*/

    //on exécutera le fichier qu'à la fin
    PyRun_SimpleFile(file, "control_car.py"); //si bien ouvert, alors on exécute le script Python
    printf("Le fichier a bien été ouvert \n");
    }

    return 0;
}

/*Mise en place des fonctions de la voiture*/
// 1 _ On repère le début de la ligne qu'on doit changer
// 2 _ On supprime la ligne
// 3 _ On remplace par la nouvelle chaîne



int moving() {

}

int backing_up() {

}

int turn_right() {

}

int turn_left() {

}