📝

**ReadMe**



|S.No|Name|Purpose|Code Intialization|
| - | - | - | :- |
|1|[Bzero](https://www.notion.so/Bzero-c23278f9203146a9a20aedcd2dd93226)|Sends 0 values to the n number defined by the user to the string|*void (char \*str, size\_t n)*|
|||||
|2|[isAlnum](https://www.notion.so/isAlnum-15ea4418d0964f959ca2c4e66e183f7e)|Returns the value true for alphabets and numbers but for others zero such as: tabs, spaces, \r etc.|*int isalnum (int value)*|
|||||
|3|[isAlpha](https://www.notion.so/isAlpha-b3a106d6848d4959948ab34e1086fdf6)|Read the string: A) If there is alphabets- it should return the value of 1 B) Any other things it will return the value 0|*int isalpha(char \*str)*|
|||||
|4|[isAscii](https://www.notion.so/isAscii-d0f6269ad2904f6b93bb6f2bbb0ccdb7)|Nonzero ifc is an ASCII character; otherwise, zero.|<p>*int isascii (int c*</p><p>*)  Use the library*</p><p>*<ctype.h>*</p>|
|||||
|5|[isDigit](https://www.notion.so/isDigit-6d7db33467694b19b7006ef08f9dce18)|Function isdigit()**takes a single argument in the form of an integer and returns the value of type int** . Even though, isdigit() takes integer as an argument, character is passed to the function. Internally, the character is converted to its ASCII value for the check.|<p>It is defined in</p><p><ctype.h> *int isdigit (int r)*</p>|
|||||
|6|[isPrint](https://www.notion.so/isPrint-3855444b9a1a479e9ada0bebbfa9ce6a)|Prints only printable characters in c; therefore returns only 1 if printable|*int isprint (int value)*|
|||||
||[Untitled](https://www.notion.so/4809917467244eec9bfb591749b2e532)|||
|||||
|7|[Calloc](https://www.notion.so/Calloc-aa78a3f8f1f3492ea35f212e09545a30)|The calloc() function allocates a specific amount of memory and initializes it to zero. The function can be cast to the desired type when it returns to a void pointer to the memory location. The memory block allocated by calloc() is initialized by zero.|***void \*calloc(size\_t count, size\_t size)***|
|||||
|8|[Memcmp](https://www.notion.so/Memcmp-043109ac92304801b931a703307fb7b8)|*The memcmp() function returns zero if the two strings are identical, otherwise returns the difference between the first two differing bytes (treated as unsigned char values, so that `\200' is greater than `\0', for example). Zero-length strings are always identical.*|<p>*int*</p><p>***ft\_memcmp** (const void \*str1, const void \*str2, size\_t num)*</p>|
|||||



|S.No|Name|Purpose|Code Intialization|
| - | - | - | :- |
|9|[Memcpy](https://www.notion.so/Memcpy-89f52c64348f417f8b2d78c687d72d57)|*copies n bytes from memory area src to memory area dst. If dst and src overlap, behavior is undefined.*|<p>v *oid*</p><p>***\*ft\_memcpy** (void \*dest, const void \*src, size\_t length)*</p>|
|||||
|10|[Memset](https://www.notion.so/Memset-6142ec292517406ab3e2971c24c13445)|is used to fill a block of memory with a particular value.|<p>*void*</p><p>***\*memset** (void \*str, int x, size\_t length)*</p>|
|||||
||[Memmove](https://www.notion.so/Memmove-d9f0dfd987044426af33d5b23adce1b6)|Moves everything from the source to the destination|<p>void</p><p>**\*ft\_memmove** (void \*dst, const void \*src, size\_t len)</p>|
|||||
||[Memchr](https://www.notion.so/Memchr-63672a27defd4c78b5bfa9138c175613)|It will look for the character inside the string and return that character|<p>void</p><p>**\*ft\_memchr** (const void \*str, int c, size\_t numb)</p>|
|||||
||[Strchr](https://www.notion.so/Strchr-05744ad2db454bab87cc71aae6981f63)|Returns the character that user writes in parameters and later prints out the string from that letter position|<p>*char*</p><p>* ***ft\_strchr** (const char \*str, int c)*</p>|
|||||
||[Strrchr](https://www.notion.so/Strrchr-12cadae5d4994e25af22fc4e1e68d6db)|Returns the character that user writes in parameters and later prints out the string from that letter position which is located at the end of the string|<p>*char*</p><p>* ***ft\_strrchr** (const char \*str, int c)*</p>|
|||||
||[Strlen](https://www.notion.so/Strlen-6852f966a0e541b1b5007a3ee6598e46)|Read the string length and return the value of the total string|*int  **strlen** (char \*str)*|
|||||
||[Strncmp](https://www.notion.so/Strncmp-10a7c97c1a09447eb91f95b0e90f54c3)|*The strncmp() function compares not more than n characters. Because strncmp() is designed for comparing strings rather than binary data, characters that appear after a `\0' character are not compared.*|<p>*int*</p><p>***strncmp** (const char \*s1, const char \*s2, size\_t num)*</p>|
|||||
||[Strrstr](https://www.notion.so/Strrstr-7bced8429ace46a68534bcc2fdb2b46a)|It returns an character where the last character occurs in the string plus the string.|<p>*char*</p><p>* ***ft\_strrchr** (const char \*str, int c)*</p>|
|||||
||[Strnstr](https://www.notion.so/Strnstr-0813872d471a4c4d80ca0577d3a15f52)|It looks for a string inside of another string and once found, it will return the **that particular string with whats next to it.** Lets say “ We are going home to Dubai”, we are looking for string “home”, it will return “home to Dubai”|<p>*char*</p><p>* ***ft\_strnstr** (const char \*str1, const char \*str2, size\_t len)*</p>|
|||||
||It splits the strings into different poistions. Lets say “Welcome to FIFA” gets split into “Welcome” “to” “FiFA” into three positions||
|||||
||[Strdup](https://www.notion.so/Strdup-bf0518a0b650429aa18f1e83539ecbde)|Just duplicates the string into the destination. You will need to store the duplicated string into new string which will have malloc/calloc storing memroy|***char \*ft\_strdup(const char \*src)***|
|||||


ReadMe 2![](Aspose.Words.3f8e09be-3c1a-437c-a55c-c4644e9a2b71.001.png)



|S.No|Name|Purpose|Code Intialization|
| - | - | - | :- |
||[Strjoin](https://www.notion.so/Strjoin-70c794f6584340d294ac8c92715b1c40)|Just joins both the destination and source strings into the new string(malloc allocated)|<p>char</p><p>**\*ft\_strjoin** (char const \*str1, char const \*str2)</p>|
|||||
||[Strlcat](https://www.notion.so/Strlcat-29e97936b8fa4e998929e91a4bbf3d25)|You are basically coping the source string to the destination string and returning the total string length values. The **limitation** is that the destsize has to be allocated to the destination string.|<p>size\_t</p><p>**ft\_strlcat** (char \*dest, const char \*src, size\_t destsize)</p>|
|||||
||[Strlcpy](https://www.notion.so/Strlcpy-ebb1c77b06264e3996b40a6d56750494)|Copied the source string into the destination string but with a restricition of limit of how much string can be copied to destination|<p>size\_t</p><p>**ft\_strlcpy** (char \*dest, const char \*src, size\_t size)</p>|
|||||
||[Strtrim](https://www.notion.so/Strtrim-764965dc84804f89b11dc661b0306196)|It will remove the strings from the start and at the end of the string specificed by the character by the user|<p>char</p><p>**\*ft\_strtrim** (char const \*str1, char const \*str2)</p>|
|||||
||[Substr](https://www.notion.so/Substr-7aa91787884548d889334ee37544a8bf)|<p>Subtracts the string given the parameters by the</p><p>user. “We are going home” we specify where the index starting position is and we also assing **n value** to return that much of the string. Lets say **start = 3 and n = 7,** the function will return “are g” to be stored into another string(malloc</p>|<p>char</p><p>**\*ft\_substr** (char const \*string, unsigned int start, size\_t len)</p>|
|||||
||[Untitled](https://www.notion.so/c67f1178e4834ddca5e154a06ae411f8)|||
|||||
||[toLower](https://www.notion.so/toLower-544dbdc6a95a40288bf4fa041d5fa031)|Converts uppercase to lowercase however you use (**%c)** to convert the integer to character which gets printed|<p>*int LowerCase (int*</p><p>c) **Using the ctype.h  library**</p>|
|||||
||[toUpper](https://www.notion.so/toUpper-03ff0b91f04d4b5f852619082d9e02b1)|Converts lowercase to uppercase however you use (**%c)** to convert the integer to character which gets printed|<p>*int toUpper (int*</p><p>c) **Using the ctype.h library**</p>|
|||||
||Converts strings to intergers value||
|||||
||Converts integers to string literal||
|||||
||[Untitled](https://www.notion.so/853c8ad89f2e436ba9c55650bf0c9d50)|||
|||||
||[MakeFile](https://www.notion.so/MakeFile-cdad77c85b5f40d59b1565270861ad86)|The purpose of a makefile is**to be easily build an executable that might take many commands to create (**which would be a pain to compile over and over again manually).|NONE|
|||||
ReadMe 3

