#include <Python.h>

static PyObject* _hello_world(PyObject* self) {
    return PyUnicode_FromString("Hello World.");
}

static PyObject* _is_it(PyObject* self, PyObject* args) {
    int num;
    if (!PyArg_ParseTuple(args, "i", &num)) {
        return NULL;
    }
    return (num % 2 == 0) ? PyUnicode_FromFormat("%i is even.", num) : PyUnicode_FromFormat("%i is odd.", num);
}

static PyObject* _greet(PyObject* self, PyObject* args) {
    PyObject* name;
    if (!PyArg_ParseTuple(args, "s", &name)) {
        return NULL;
    }
    return PyUnicode_FromFormat("Hello %s!", name);
}

static struct PyMethodDef methods[] = {
    {"hello_world", (PyCFunction)_hello_world, METH_NOARGS},
    {"greet", (PyCFunction)_greet, METH_VARARGS},
    {"_is", (PyCFunction)_is_it, METH_VARARGS},
    {NULL, NULL}
};

static struct PyModuleDef module = {
    PyModuleDef_HEAD_INIT,
    "isEven",
    NULL,
    -1,
    methods
};

PyMODINIT_FUNC PyInit_isEven(void) {
    return PyModule_Create(&module);
}
