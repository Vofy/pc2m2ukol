# pc2m1

Settings -> Compiler... -> Global compiler settings -> Linker settings -> Other linker options: = `-lm`

## Compile
```sh
gcc -o build main.c common.c tasks/1a.c tasks/1b.c tasks/1c.c tasks/1d.c tasks/bonus.c -lm
```
