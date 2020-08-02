# oot3d
A partial Ocarina of Time 3DS Decompilation (Proof of Concept)

## Compiler flags (subject to change)
`armcc.exe --apcs=/interwork --cpu=MPCore --fpmode=fast --signed_chars --remove_unneeded_entities --split_sections -Otime`

`--no_autoinline` may be desirable while testing snippets of code.

## Objdump parameters
`objdump.exe -D --demangle -m armv6k func.o > func.s`

## Notes
* These functions match their original versions, however I have not attempted to link them to the original game's code. As a result, when these functions are compiled on their own, they will have incorrect offsets for functions and global variables. I have decided to ignore these and assume that they would be resolved properly by the linker.
* In order to compile these and generate the correct assembly, you need access to ARM Compiler toolchain 4.1 build 1454. I cannot tell you where to find this.
