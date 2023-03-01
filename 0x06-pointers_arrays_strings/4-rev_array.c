/**
 *reverse_array - updates the value of the variable
 * the pointer points to 98
 * @a: pointer to the variable to update
 * @n: pointer to the variable
 *
 */

void reverse_array(int *a, int n)
{
int eachMem, temp;
for (eachMem = 0; eachMem < n; eachMem++)
{
temp = a[eachMem];
a[eachMem] = a[n - 1];
a[n - 1] = temp;
n--;
}
}
