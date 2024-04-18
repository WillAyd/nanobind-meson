# Compiling with CMake

```
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -G Ninja
VERBOSE=1 cmake --build build
```

# Compiling with Meson

```
meson setup builddir && cd builddir
meson compile -v
```
