#include <Python.h>
/**
 * print_python_list_info - Prints Python lists.
 * @p: pointer parameter.
 */
void print_python_list_info(PyObject *p)
{
	int s, alloc, i;
	PyObject *x;

	s = Py_SIZE(p);
	alloc = ((PyListObject *)p)->allocated;

	printf("[*] Size of the Python List = %d\n", s);
	printf("[*] Allocated = %d\n", alloc);

	for (i = 0; i < s; i++)
	{
		printf("Element %d: ", i);
		x = PyList_GetItem(p, i);
		printf("%s\n", Py_TYPE(x)->tp_name);
	}
}
