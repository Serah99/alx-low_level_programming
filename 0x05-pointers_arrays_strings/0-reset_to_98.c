/**
 * reset_to_98 - Updates the value it points to to 98.
 * @n: A pointer to an int that will be updated.
 *
 * Return: void.
 */
void reset_to_98(int *n) {
    if (n != NULL) { /* Check to ensure the pointer is not NULL */
        *n = 98;     /* Update the value it points to */
    }
}
