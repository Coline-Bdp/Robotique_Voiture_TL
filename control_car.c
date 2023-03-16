#define PY_SSIZE_T_CLEAN
#include <Python.h>

int main() {
    Py_Initialize();

    
    PyObject *obj = Py_BuildValue("s", "control_car.py");   //crée un objet "obj" qui est une chaîne de caractères (qui est dans le fichier Python utilisé)
    FILE *file = _Py_fopen_obj(obj, "r+");  //ouvre le fichier Python "obj" en lecture écriture avec un nom "file"
    if(file != NULL) {      //vérifie si le pointeur de fichier est ouvert ou non
    PyRun_SimpleFile(file, "control_car.py"); //si bien ouvert, alors on exécute le script Python
    printf("Le fichier a bien été ouvert \n");
    }

    return 0;
}

