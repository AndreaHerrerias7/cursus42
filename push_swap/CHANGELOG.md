# Argumentos de lectura
- Leo los argumentos (pueden ser una cadena de caracteres, entero o mixto)
- Creo una estructura para guardar esos datos que contiene

``` 
typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;
```