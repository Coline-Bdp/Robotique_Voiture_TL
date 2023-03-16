#define PY_SSIZE_T_CLEAN
#include <Python.h>

int main() {
    Py_Initialize();

    
     PyObject *obj = Py_BuildValue("s", "control_car.py");
    FILE *file = _Py_fopen_obj(obj, "r+");
    if(file != NULL) {
     PyRun_SimpleFile(file, "control_car.py");
    }
    
    /*
    // Importe le module Python contenant la fonction set_motor_speeds
    PyObject* module = PyImport_ImportModule("controlcar.py");
    if (!module) {
        PyErr_Print();
        return 1;
    }

    // Obtient la fonction set_motor_speeds depuis le module
    PyObject* set_motor_speeds_func = PyObject_GetAttrString(module, "set_motor_speeds");
    if (!set_motor_speeds_func || !PyCallable_Check(set_motor_speeds_func)) {
        if (PyErr_Occurred()) PyErr_Print();
        return 1;
    }

    // Appelle la fonction set_motor_speeds avec les vitesses désirées
    PyObject* args = Py_BuildValue("(dddd)", 0.5, 0.7, -0.2, -0.4);
    PyObject* result = PyObject_CallObject(set_motor_speeds_func, args);
    Py_DECREF(args);
    Py_DECREF(result);

    Py_DECREF(set_motor_speeds_func);
    Py_DECREF(module);

    Py_Finalize();
    */

    return 0;
}