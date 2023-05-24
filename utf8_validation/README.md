# **UTF-8 Validation**

## The magic hack of **U**nicode **T**ransformation **F**ormat

**_=>Repository with a Python method :snake: for validating UTF8 encoded data, given as a list of integers._**

**UTF8** is a very widely used character encoding, that can represent any Unicode character using a variable length encoding. <br>
A character in UTF8 can be 1 to 4 bytes long.
The **UTF-8 encoding** rules defines how Unicode characters are encoded into a sequence of bytes,

- **Code points** Unicode assigns a unique number, called a code point, to each character
- **Byte order** uses a single byte order
- **Byte structure** A byte in UTF-8 has specific **_bit patterns_** to indicate length and content of a character
- **ASCII Compatiblity** UTF-8 is **backward** compatible with **ASCII** (7-bit characters). ASCII characters are represented using a single byte <br>
  (0 to 127) with the same bit pattern as ASCII itself !
- **Multiple characters** Characters which are outside the ASCII range are encoded using **multiple bytes** (number of bytes varies on the Unicode code point).
- **Byte patterns** The first byte of a multibyte character indicates the total number of bytes used for the character. <br>
  **Subsequent bytes** or **Continuation bytes**, have specific patterns to distinguish them from starting bytes.
- **Bit pattern** are as follow:
  - For 1-byte: Starts with '0' followed by 7 bits for character value
  - For 2-bytes: Starts with '110' followed by 5 bits for character value
  - For 3-bytes: Starts with '1110' followed by 4 bits for character value
  - For 4-bytes: **_you know what's going on_**
- **Continuation Bytes** In a multibytes representation (2, 3 and 4), continuation bytes always starts with '10'.
  It ensures to differentiate them from starting bytes, and also to identify them as part of the multibyte character, and not a separate stuff selfish stuff on his own, hah!
