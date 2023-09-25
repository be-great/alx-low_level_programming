# What is pointer to pointers :-
<p> **ptr -> *ptr -> value</p> <br>
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

