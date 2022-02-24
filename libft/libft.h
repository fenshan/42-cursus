/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:11:12 by fnicolas          #+#    #+#             */
/*   Updated: 2022/02/24 22:11:53 by fnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# define UC unsigned char

/*********************************/
/*    PART 1 - LIBC FUNCTIONS    */
/*********************************/
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
/* If the argument is an upper-case letter returns the corresponding
 * lower-case letter. Otherwise, the argument is returned unchanged.*/
int		ft_tolower(int c);
/* If the argument is a lower-case letter returns the corresponding
 * upper-case letter. Otherwise, the argument is returned unchanged.*/
int		ft_toupper(int c);

//returns string length
size_t	ft_strlen(const char *s);
//writes len bytes of value c (converted to unsigned char) to the string b
void	*ft_memset(void *b, int c, size_t len);
//writes n zeroed bytes to the string s
void	ft_bzero(void *s, size_t n);
//copies n bytes from src to dst 
void	*ft_memcpy(void *dst, const void *src, size_t n);

/* Copies len bytes from src to dst in a non-destructive manner
 * if the strings overlap.
*/
void	*ft_memmove(void *dst, const void *src, size_t len);

/* Copies up to dstsize - 1 characters from src to dst,
 * NUL-terminates the result if dstsize is not 0.
 * Returns the total length of the string it tried to create, len(src).
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

/* Appends src to the end of dst.
 * It will append at most dstsize - strlen(dst) - 1 characters.
 * NUL-terminates unless dstsize is 0 or the original dst string
 * was longer than dstsize.
 * Returns the total length of the string it tried to create, 
 * i.e. min(initial len of dst, dstsize) + len of src.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/* Locates the first occurrence of c (converted to a char).
 * The terminating null character is considered to be part of the string.
 * Returns a pointer to the located character or NULL if not found.
*/
char	*ft_strchr(const char *s, int c);

/* Identical to ft_strchr, except it locates the last reference of c.*/
char	*ft_strrchr(const char *s, int c);

/* Compare n characters of the null-terminated strings s1 and s2.
 * Returns an integer greater, equal or less than 0, according
 * as s1 is greater than, equal to or less than s2. The comparison is done
 * using unsigned characters. */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/* Locates the first ocurrence of c (unsigned char) in n bytes.
 * Returns a pointer to the location or NULL if not found. */
void	*ft_memchr(const void *s, int c, size_t n);

/* Compares byte string s1 against byte string s2.
 * Both strings are assumned to be n bytes long.
 * Returns 0 if the two strings are identical, otherwise returns the difference 
 * (unsigned char) */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/* Locates the first occurrence of the null-terminated string
 * needle in the string haystack, where not more than len characters 
 * are searched.
 * Characters that appear after a `\0' character are not searched.
 * If needle is an empty string, haystack is returned; if needle occurs 
 * nowhere in haystack, NULL is returned; otherwise a pointer to the
 * first character of the first occurrence of needle is returned.*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int		ft_atoi(const char *str);

/* Contiguously allocates enough space for count objects that are
 * size bytes of memory each and returns a pointer to the allocated memory.
 * The allocated memory is filled with bytes of value zero.
 * If there is an error, they return a NULL pointer and set errno to ENOMEM.*/
void	*ft_calloc(size_t count, size_t size);

/* The strdup() function allocates sufficient memory for a copy of the string 
 * s1, does the copy, and returns a pointer to it. If insufficient
 * memory is available, NULL is returned and errno is set to ENOMEM.*/
char	*ft_strdup(const char *s1);

/*********************************/
/* PART 2 - ADDITIONAL FUNCTIONS */
/*********************************/

/* Allocates (with malloc(3)) and returns a substring from the string s
 * The substring begins at index ’start’ and is of max size len. */
char	*ft_substr(char const *s, unsigned int start, size_t len);
/* Allocates (with malloc(3)) and returns a new string,
 * which is the result of the concatenation of s1 and s2. */
char	*ft_strjoin(char const *s1, char const *s2);
/* Allocates (with malloc(3)) and returns a copy of s1 with the characters
 * specified in set removed from the beginning and the end of the string. */
char	*ft_strtrim(char const *s1, char const *set);
/* Allocates (with malloc(3)) and returns an array of strings obtained by 
 * splitting ’s’ using the character ’c’ as a delimiter. The array must end 
 * with a NULL pointer.*/
char	**ft_split(char const *s, char c);
/* Allocates (with malloc(3)) and returns a string representing the 
 * integer received as an argument. Negative numbers must be handled.*/
char	*ft_itoa(int n);
/* Applies the function ’f’ to each character of the string ’s’, and 
 * passing its index as first argument to create a new string (with 
 * malloc(3)) resulting from successive applications of ’f’.*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/* Applies the function ’f’ on each character of the string passed as 
 * argument, passing its index as first argument. Each character is passed 
 * by address to ’f’ to be modified if necessary.*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
/* Outputs the character ’c’ to the given file descriptor.*/
void	ft_putchar_fd(char c, int fd);
/* Outputs the string ’s’ to the given file descriptor.*/
void	ft_putstr_fd(char *s, int fd);
/* Outputs the string ’s’ to the given file descriptor followed by a newline.*/
void	ft_putendl_fd(char *s, int fd);
/* Outputs the integer ’n’ to the given file descriptor.*/
void	ft_putnbr_fd(int n, int fd);

/*********************************/
/*      PART 3 - BONUS PART      */
/*********************************/

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
/* Allocates (with malloc(3)) and returns a new node. The member variable 
 * ’content’ is initialized with the value of the parameter ’content’. 
 * The variable ’next’ is initialized to NULL.*/
t_list	*ft_lstnew(void *content);
/* Adds the node ’new’ at the beginning of the list.*/
void	ft_lstadd_front(t_list **lst, t_list *new);
/* Counts the number of nodes in a list.*/
int		ft_lstsize(t_list *lst);
/* Returns the last node of the list.*/
t_list	*ft_lstlast(t_list *lst);
/* Adds the node ’new’ at the end of the list*/
void	ft_lstadd_back(t_list **lst, t_list *new);
/* Takes as a parameter a node and frees the memory of the node’s content 
 * using the function ’del’ given as a parameter and free the node. 
 * The memory of ’next’ must not be freed.*/
void	ft_lstdelone(t_list *lst, void (*del)(void *));
/* Deletes and frees the given node and every successor of that node, 
 * using the function ’del’ and free(3). Finally, the pointer to the list 
 * must be set to NULL.*/
void	ft_lstclear(t_list **lst, void (*del)(void *));
/* Iterates the list ’lst’ and applies the function ’f’ on the content of 
 * each node.*/
void	ft_lstiter(t_list *lst, void (*f)(void *));
/* Iterates the list ’lst’ and applies the function ’f’ on the content of 
 * each node. Creates a new list resulting of the successive applications 
 * of the function ’f’. The ’del’ function is used to delete the content of a 
 * node if needed.*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
			void	(*del)(void *));

#endif
