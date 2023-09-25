# What is pointer to pointers :-
_<p> **ptr -> *ptr -> value_

🗺️ Imagine a pointer as a treasure map, showing you where to find a hidden treasure chest (your data) in a vast desert of memory.

✨ Now, a pointer to a pointer is like a magical compass that points to multiple treasure maps at once! 🧭✨

🔮 You have a bunch of these maps, and each map can lead you to different treasures. The magical compass (pointer to pointer) doesn't directly take you to a treasure but helps you pick the right treasure map (pointer) out of many.

So, it's like treasure hunting with a treasure map selector! 🗺️🧭✨
# Pointer Sizes in C

In C, the size of pointers can vary depending on the system's architecture. Here, we'll explore the sizes of pointers and pointer-to-pointers.

1. `int **p;`
   - 🤔 *p has the size of a pointer to a pointer (`int **`).
   - On a 32-bit system, it's typically 4 bytes because memory addresses are 32 bits long.
   - On a 64-bit system, it's typically 8 bytes due to 64-bit memory addresses.

2. `int *p;`
   - 🤔 *p has the size of a pointer (`int *`).
   - On a 32-bit system, it's usually 4 bytes as memory addresses are 32 bits.
   - On a 64-bit system, it's generally 8 bytes due to 64-bit memory addresses.

3. `int *p;`
   - 🤔 p is a pointer, acting like a signpost to a treasure map.
   - On a 32-bit system, it's usually 4 bytes.
   - On a 64-bit system, it's typically 8 bytes.

4. `int **p;`
   - 🤔 p is a pointer to a pointer, serving as a treasure map selector!
   - On a 32-bit system, it's usually 4 bytes.
   - On a 64-bit system, it's typically 8 bytes.

These sizes are based on common system architectures, but remember that they can vary. Understanding pointer sizes is essential for managing memory efficiently in C programs.
| File  | Description                                  |
|----------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 0-memset| `memset` function that fills memory with a constant byte. |
| 1-memcpy | `memcpy` function that copies memory area.          |
| 2-strchr | `strcpy` function that locates a character in a string  (return the pointer of that)   |
| 3-strspn | `strspn` function that gets the length of a prefix substring. function scans the string str from the beginning and counts how many consecutive characters at the start of str are also found in charset. It stops counting as soon as it encounters a character that is not in charset or reaches the end of str.|
| 4-strpbrk  | `strpbrk` function that searches a string for any of a set of bytes. It searches for the first occurrence of any character from a specified set of characters within a given string and returns a pointer to that character or NULL |
| 5-strstr  | `strstr` function that locates a substring. The strstr function searches the haystack string for the first occurrence of the needle substring. If the needle is found within the haystack, it returns a pointer to the first character of the first occurrence of the needle or NULL|


